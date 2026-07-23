class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> answer;
        for(int i=0;i<m;i++){
            answer.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            answer.push_back(nums2[i]);
        }
        sort(answer.begin(),answer.end());
        nums1= answer;
    }
};