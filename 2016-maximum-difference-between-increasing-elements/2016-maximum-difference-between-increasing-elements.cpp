class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        // int j=0;
        int maxi=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    ans=nums[j]-nums[i];
                    maxi=max(ans,maxi);
                }
            }
        }
        return maxi;
   }
};