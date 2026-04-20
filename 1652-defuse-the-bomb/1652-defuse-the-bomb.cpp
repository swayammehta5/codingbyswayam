class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(k==0){
                ans[i]=0;
            }else if(k>0){
                int sum=0;
                for(int j=1;j<=k;j++){
                    sum+=code[(i+j)%n];
                }
                ans[i]=sum;
            }else{
                int sum=0;
                for(int j=1;j<=-k;j++){
                    sum+=code[(i-j+n)%n];
                }
                ans[i]=sum;
            }
        }
        return ans;
    }
};