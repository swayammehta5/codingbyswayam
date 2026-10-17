class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int idx=n-k;
        int ans;
        for(int i=0;i<idx+1;i++){
            ans= nums[i];
        }
        return ans;
    }
};