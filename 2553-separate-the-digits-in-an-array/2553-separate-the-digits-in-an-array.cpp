class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            vector<int>ans;
            int num=nums[i];
            while(num!=0){
                int digit=num%10;
                num=num/10;
                ans.push_back(digit);
            }
            for(int j=ans.size()-1;j>=0;j--){
                result.push_back(ans[j]);
            }
        }
        return result;
    }
};