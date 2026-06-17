class Solution {
public:
    char processStr(string s, long long k) {
        long long len = 0;
        // Calculate final length
        for(char ch:s){
            if(ch=='*'){
                if(len>0) len--;
            }
            else if(ch=='#'){
                len *=2;
            }
            else if(ch=='%'){
                // length unchanged
            }
            else{
                len++;
            }
        }
        if (k>=len) return '.';
        // Work backwards
        for(int i=s.size()-1;i>=0;i--){
            char ch=s[i];
            if (ch=='*') {
                len++;
            }
            else if(ch=='#'){
                len /= 2;
                if (k>=len) {
                    k-=len;
                }
            }
            else if(ch=='%') {
                k=len-1-k;
            }
            else{
                len--;
                if(k==len) {
                    return ch;
                }
            }
        }
        return '.';
    }
};