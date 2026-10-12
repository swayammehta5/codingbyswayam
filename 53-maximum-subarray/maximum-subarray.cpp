class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxSum=nums[0];
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            maxi=max(nums[i],nums[i]+maxi);
            maxSum=max(maxi,maxSum);
        }
        return maxSum;
    }
};