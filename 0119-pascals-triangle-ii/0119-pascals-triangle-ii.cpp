class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        
        vector<int>ans(n+1,1);
        if(n<=1) return ans;
        for(int i=2;i<=n;i++){
            for(int j=i-1;j>=1;j--){
                ans[j]=ans[j]+ans[j-1];
            }
        }
        return ans;
    }
};