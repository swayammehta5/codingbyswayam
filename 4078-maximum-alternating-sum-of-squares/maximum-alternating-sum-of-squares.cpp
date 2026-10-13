class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        long long sum=0;
        for(int i=0;i<n;i++){
            long long square= nums[i]*nums[i];
            ans.push_back(square);
        }
        sort(ans.rbegin(),ans.rend());
        int len1;
        int len2;
        if(n%2!=0){
            len1=(n/2) +1;
        }else{
            len1=n/2;
        }
        for(int i=0;i<len1;i++){
            sum+=ans[i];
        }
        for(int i=len1;i<n;i++){
            sum-=ans[i];
        }
        return sum;
// 9 9 4 4 1 1 
    }
};