class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            int number=nums[i];
            int sum=0;
            while(number!=0){
                int digit=number%10;
                sum = sum+digit;
                number=number/10;
            }
            temp.push_back(sum);
        }
        int mini=temp[0];
        for(int i=0;i<n;i++){
            if(mini>temp[i]){
                mini=temp[i];
            }
        }
        return mini;
    }
};