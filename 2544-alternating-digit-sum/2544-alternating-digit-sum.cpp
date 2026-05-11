class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> num;
        while(n!=0){
            int digit=n%10;
            n=n/10;
            num.push_back(digit);
        }
        reverse(num.begin(),num.end());
        int sum=0;
        int length=num.size();
        for(int i=0;i<length;i++){
            if(i%2==0){
                sum+=num[i];
            }else{
                sum-=num[i];
            }
        }
        return sum;
    }
};