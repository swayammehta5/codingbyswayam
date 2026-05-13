class Solution {
public:
    int minimumNumbers(int num, int k) {
        if(num==0){
            return 0;
        }
        // int count=0;
        for(int i=1;i<=10;i++){
            int prod=i*k;
            int lastdigit=prod%10;
            int lastnum=num%10;
            if(lastnum==lastdigit &&prod<=num){
                return i;
            }
        }
        // if(count!=0) return -1;
        return -1;
    }
};