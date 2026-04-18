class Solution {
public:
    int mirrorDistance(int n) {
        int n1=n;
        int sum=0;
        while(n1!=0){
            int digit=n1%10;
            sum= (sum*10) +digit;
            n1=n1/10;
        }
        int rev=sum;
        int ans= abs(n-rev);
        return ans;
    }
};