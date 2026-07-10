class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0;
        int high=0;
        for(int i=0;i<weights.size();i++){
            low=max(low,weights[i]);
            high+=weights[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int totalDays=1;
            int currentWeight=0;
            for(int i=0;i<weights.size();i++){
                if(currentWeight+weights[i]>mid){
                    totalDays++;
                    currentWeight=weights[i];
                }
                else{
                    currentWeight += weights[i];
                }
            }
            if(totalDays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};