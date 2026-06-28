class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>ans;
        ans.push_back(1);
        for (int i=1;i<arr.size();i++){
            ans.push_back(min(arr[i],ans.back()+1));
        }
        return ans.back();
    }
};