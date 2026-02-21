class Solution {
public:
    bool prime(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        vector<int> bitss;
        for(int i=left;i<=right;i++){
            int count= __builtin_popcount(i);
            bitss.push_back(count);
        }
        int total=0;
        for(int i=0;i<=bitss.size()-1;i++){
            if(prime(bitss[i])){
                total++;
            }
        }
        return total;

    }
};