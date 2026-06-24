class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int currSum=nums[0];
        int totalSum=nums[0];
        for(int i=1;i<n;i++){
            currSum=max(nums[i],currSum+nums[i]);
            totalSum=max(currSum,totalSum);
        }
        return totalSum;
    }
};