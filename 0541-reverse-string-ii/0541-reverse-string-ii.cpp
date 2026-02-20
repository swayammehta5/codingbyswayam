class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        int start=0;
        // int e=k-1;
        // int i=0;
        for(int j=0;j<n;j+=2*k){
                int e=min(j+k-1,n-1);
                int i=j;
                while(i<e){
                    swap(s[i++],s[e--]);
                }
                // i+=k;
        }
        return s;
    }
};