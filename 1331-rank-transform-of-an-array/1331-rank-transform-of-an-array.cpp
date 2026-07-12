class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>output1;
        vector<int>output2;
        for(int i=0;i<n;i++){
            output1.push_back(arr[i]);
        }
        sort(output1.begin(),output1.end());
        map<int,int>rank;
        int r=1;
        for(int i=0;i<n;i++){
            if(rank.find(output1[i])==rank.end()){
                rank[output1[i]]=r;
                r++;
            }
        }
        for(int i=0;i<n;i++){
            output2.push_back(rank[arr[i]]);
        }
        return output2;
    }
};