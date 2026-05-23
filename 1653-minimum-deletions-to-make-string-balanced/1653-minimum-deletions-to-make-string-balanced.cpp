class Solution {
public:
    int minimumDeletions(string s) {
        int countb=0;
        int deletions=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='b'){
                countb++;
            }else{
                deletions=min(deletions+1,countb);
            }
        }
        return deletions;
    }
};