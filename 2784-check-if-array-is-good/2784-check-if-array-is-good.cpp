class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        int last=n-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(i+1 !=nums[i]) return false;
        }
        if(last !=nums[n-1]) return false;
        return true;
    }
};