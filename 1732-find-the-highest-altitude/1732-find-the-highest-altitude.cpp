class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int start=0;
        int n=gain.size();
        vector<int>gainss;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=gain[i];
            gainss.push_back(sum);
        }
        sort(gainss.begin(),gainss.end());
        int maxi=gainss[gainss.size()-1];
        if(maxi>start){
            return maxi;
        }else{
            return start;
        }
    }
};