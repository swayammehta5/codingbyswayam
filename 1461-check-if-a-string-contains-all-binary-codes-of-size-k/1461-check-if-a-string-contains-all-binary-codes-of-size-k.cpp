class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        vector<string>ans;
        if(k>n) return false;
        for(int i=0;i<=n-k;i++){
            string chr=s.substr(i,k);
            ans.push_back(chr);
        }
        int power=pow(2,k);
        sort(ans.begin(),ans.end());
        auto it =unique(ans.begin(),ans.end());
        ans.erase(it,ans.end());
        int len=ans.size();
        if(len==power){
            return true;
        }
        return false;
    }
};