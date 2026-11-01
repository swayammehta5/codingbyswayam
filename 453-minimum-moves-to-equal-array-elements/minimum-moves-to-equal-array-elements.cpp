class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        int s=nums[0];
        int e=nums[n-1];
        for(int i=0;i<n;i++){
            count+=nums[i]-s;
        }
        return count;
    }
};