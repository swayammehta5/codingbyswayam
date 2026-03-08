class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if (n==0) return "";
        string preflex="";
        for(int i=0;i<strs[0].length();i++){
            char ch=strs[0][i];
            for(int j=1;j<n;j++){
                if(i>=strs[j].length() ||strs[j][i]!=ch ){
                    return preflex;
                }
            }
            preflex+=ch;
        }
        return preflex;
    }
};