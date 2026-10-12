class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        string arr[n];
        string temp="";
        int idx=0;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(temp!=""){
                    arr[idx++]=temp;
                    temp="";
                }
            }else{
                temp+=s[i];
            }
        }
        if(temp!=""){
            arr[idx++]=temp;
        }
        if(idx==0){
            return idx;
        }
        return arr[idx-1].size();
    }
};