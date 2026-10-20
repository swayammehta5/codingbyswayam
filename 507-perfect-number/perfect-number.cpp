class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        if(num<=1){
            return false;
        }
        for(int i=1;i<num/i;i++){
            if(num%i==0){
                sum+=i;
                int other= num/i;
                if(other != i && other!=num){
                    sum+=other;
                }
            }
        }
        if(sum!=num) return false;
        return true;
    }
};