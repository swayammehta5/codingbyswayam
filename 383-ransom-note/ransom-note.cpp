class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(int i=0;i<n;i++){
            freq1[ransomNote[i]]++;
        }
        for(int j=0;j<m;j++){
            freq2[magazine[j]]++;
        }
        for(auto it:freq1){
            if(freq2[it.first]<it.second){
                return false;
            }
        }
        return true;


    }
};