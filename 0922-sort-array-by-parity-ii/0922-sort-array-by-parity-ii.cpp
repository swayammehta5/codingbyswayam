class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>even;
        vector<int>odd;
        int e=0;
        int o=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                // even++;
                even.push_back(nums[i]);

            }else{
                // odd++;
                odd.push_back(nums[i]);
            }
        }

        vector<int>total(n);
        for(int i=0;i<n;i++){
            if(i%2==0){
                total[i]=even[e];
                e++;
            }else{
                total[i]=odd[o];
                o++;
            }
        }
        return total;
    }
};