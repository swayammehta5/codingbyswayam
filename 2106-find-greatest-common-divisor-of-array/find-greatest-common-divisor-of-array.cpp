class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxi=nums[n-1];
        int mini=nums[0];
        while(mini !=0){
            int rem= maxi % mini;
            maxi=mini;
            mini=rem;
        }
        return maxi;
    }
};