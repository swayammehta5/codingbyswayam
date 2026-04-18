class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n=position.size();
        int ecount=0, ocount=0;
        for(int i=0;i<n;i++){
            if(position[i]%2==0){
                ecount++;
            }else{
                ocount++;
            }
        }
        int ans=min(ecount,ocount);
        return ans;
    }
};