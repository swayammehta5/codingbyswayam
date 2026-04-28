class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int min1=INT_MAX;
        int min2=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<=min1){
                min1=nums[i];
            }else if(nums[i]<=min2){
                min2=nums[i];
            }else{
                return true;
            }
        }
        return false;
    }
};