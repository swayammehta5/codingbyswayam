class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int profit=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(nums[i],mini);
            profit=max(profit,nums[i]-mini);
        }
        return profit;
    }
};