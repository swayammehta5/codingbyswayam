class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>answer;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                answer.push_back(nums[i]);
            }
        }
        int m=answer.size();
        for(int i=0;i<n-m;i++){
            answer.push_back(0);
        }
        nums= answer;
    }
};