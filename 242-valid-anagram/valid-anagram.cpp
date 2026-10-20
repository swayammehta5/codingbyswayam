class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        // unordered_map<char,int>freq1;
        // unordered_map<char,int>freq2;
        // for(int i=0;i<n;i++){
        //     freq1[s[i]]++;
        // }
        // for(int j=0;j<m;j++){
        //     freq2[t[j]]++;
        // }
        // for(int i=0;i<n;i++){
        //     if(freq1[s[i]]!=freq2[s[i]]) return false;
        // }
        // return true;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};