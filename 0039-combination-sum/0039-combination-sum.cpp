class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<int>&ans, vector<vector<int>>&output,int index){
        int n=candidates.size();
        if(target==0){
            output.push_back(ans);
            return;
        }
        if(index==n || target<0) return;
        ans.push_back(candidates[index]);
        solve(candidates,target-candidates[index],ans,output,index);
        ans.pop_back();
        solve(candidates,target,ans,output,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>ans;
        vector<vector<int>>output;
        int index=0;
        solve(candidates,target,ans,output,index);
        return output;

    }
};