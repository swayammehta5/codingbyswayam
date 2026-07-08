class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        } 
        int maxFreq=0;
        for(auto it:freq){
            maxFreq=max(maxFreq,it.second);
        }
        int ans=0;
        for(auto it:freq){
            if(it.second==maxFreq){
                ans+=it.second;
            }
        }
        return ans;

    }
};