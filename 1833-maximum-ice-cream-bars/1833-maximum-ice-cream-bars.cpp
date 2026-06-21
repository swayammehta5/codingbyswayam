class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        sort(costs.begin(),costs.end());
        int maxi=0;
        int count=0;
        for(int i=0;i<n;i++){
            int cost=costs[i];
            if(coins>=cost){
                count++;
                coins=coins-cost;
            }
            // maxi=max(count,)
        }
        return count;

    }
};