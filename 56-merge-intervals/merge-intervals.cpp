class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        int i=0;
        while(i<n){
            int start= intervals[i][0];
            int end= intervals[i][1];
            while(i+1<n && intervals[i+1][0]<=end){
                end=max(end,intervals[i+1][1]);
                i++;
            }
            result.push_back({start,end});
            i++;
        }
        return result;
    }
};