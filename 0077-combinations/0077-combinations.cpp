class Solution {
public:
    void solve(int n,int k, int index,vector<vector<int>>&output,vector<int>&ans){
        if(ans.size()==k){
            output.push_back(ans);
            return;
        }
        for(int i=index;i<=n;i++){
            ans.push_back(i);
            solve(n,k,i+1,output,ans);
            ans.pop_back();
        }

    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>output;
        vector<int>ans;
        solve(n,k,1,output,ans);
        return output;
    }
};