class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=0;
        int e=n-1;
        // int mid=s+(e-s)/2;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return true;
            }
            if(target>nums[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }

        }
        return false;

    }
};