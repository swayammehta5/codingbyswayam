class Solution {
public:
    int numTrees(int n) {
        if(n==0 || n==1) return 1;
        int total=0;
        for(int i=1;i<=n;i++){
            int left=numTrees(i-1);
            int right=numTrees(n-i);
            total+=left*right;
        }
        return total;
    }
};