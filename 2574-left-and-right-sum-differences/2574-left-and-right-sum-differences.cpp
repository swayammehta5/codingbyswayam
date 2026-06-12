class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>left;
        vector<int>right;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int leftSum=0;
            int rightSum=0;
            for(int j=0;j<i;j++){
                leftSum+=nums[j];
            }
            left.push_back(leftSum);
            for(int j=i+1;j<n;j++){
                rightSum+=nums[j];
            }
            right.push_back(rightSum);
        }
        for(int i=0;i<n;i++){
            int diff=abs(left[i]-right[i]);
            ans.push_back(diff);
        }
        return ans;
    }
}; 