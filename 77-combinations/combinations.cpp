class Solution {
public:
    void solve(int n,int k ,int index, vector<int>&ans,vector<vector<int>>&output){
        if(ans.size()==k){
            output.push_back(ans);
            return;
        }
        for(int i=index;i<=n;i++){
            ans.push_back(i);
            solve(n,k,i+1,ans,output);
            ans.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>ans;
        vector<vector<int>>output;
        solve(n,k,1,ans,output);
        return output;
    }
};