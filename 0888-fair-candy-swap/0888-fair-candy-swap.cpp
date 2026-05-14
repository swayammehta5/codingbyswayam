class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA=0;
        int sumB=0;
        int n1=aliceSizes.size();
        int n2=bobSizes.size();
        for(int i=0;i<n1;i++) sumA+=aliceSizes[i];
        for(int i=0;i<n2;i++) sumB+=bobSizes[i];

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                int x=aliceSizes[i];
                int y=bobSizes[j];
                if(sumA-x+y == sumB-y+x){
                    return {x,y};
                }
            }
        }
        return {};
    }
};