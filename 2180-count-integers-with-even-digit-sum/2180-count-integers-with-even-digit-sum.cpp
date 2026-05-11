class Solution {
public:
    int countEven(int num) {
        int n=num;
        int i=1;
        int count=0;
        while(i<=n){
            int number=i;
            int sum=0;
            vector<int>ans;
            while(number!=0){
                int digit=number%10;
                // sum=digit*10 +sum;
                ans.push_back(digit);
                number=number/10;
            }
            for(int i=0;i<ans.size();i++){
                sum+=ans[i];
            }
            if(sum%2==0){
                count++;
            }
            i++;
        }
        return count;
    }
};