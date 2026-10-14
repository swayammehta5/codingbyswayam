class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int ele;
        for(auto x: freq){
            if(x.second==1){
                ele= x.first;
            }
        }
        return ele;
    }
};