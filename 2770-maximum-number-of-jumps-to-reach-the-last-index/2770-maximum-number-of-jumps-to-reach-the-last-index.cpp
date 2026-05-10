class Solution {
public:

    int solve(int index,vector<int>& nums,int target, vector<int>&t) {
        int n=nums.size();
        // Reached last index
        if(index==n-1)
            return t[index]=0;
        if(t[index]!=INT_MIN){
            return t[index];
        }
        int maxi=INT_MIN;
        for(int j=index+1;j<n;j++){
            if(abs(nums[index]-nums[j])<= target){
                int ans=solve(j,nums,target,t);
                // if(ans!=-1){
                    maxi=max(maxi,ans+1);
                // }
            }
        }
        return t[index]=maxi;
    }

    int maximumJumps(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>t(n+1,INT_MIN);
        int result= solve(0,nums,target,t);
        return result <0 ?-1:result;
        // using memoisation
    }
};