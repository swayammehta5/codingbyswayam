class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n=s1.size();
        if(s1==s2) return true;
        vector<int> a1(26,0),a2(26,0);
        //even
        for(int i=0;i<n;i+=2){
            a1[s1[i]-'a']++;
            a2[s2[i]-'a']++;
        }
        if(a1!=a2) return false;
        for(int i=0;i<26;i++){
            a1[i]=0;
            a2[i]=0;
        }
        //odd
        for(int i=1;i<n;i+=2){
            a1[s1[i]-'a']++;
            a2[s2[i]-'a']++;
        }
        if(a1!=a2) return false;
        return true;
    }
};