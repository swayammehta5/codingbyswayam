class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        long long i=1;
        while(i<=n){
            if(i==n){return true;}
            i=i*3;
        }
        return false;
    }
};