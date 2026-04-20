class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int maxi=0;;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(colors[i]!=colors[j]){
                    int diff=abs(i-j);
                    if(diff>maxi){
                        maxi=diff;
                    }
                }
            }
        }
        return maxi;
    }
};