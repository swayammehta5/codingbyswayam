class Solution {
public:
    int binaryGap(int n) {
        int len=0;
        int maxlen=0;
        int foundOne=false;
        while(n!=0){
            int val= n&1;
            if(val==1){
                if(foundOne){
                    maxlen=max(maxlen,len);
                }
                len=1;
                foundOne=true;
            }else{
                if(foundOne){
                    len++;
                }
            }
            n=n>>1;
        }
        return maxlen;
    }
};