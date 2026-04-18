class Solution {
public:
    int largestInteger(int num) {
        // int n=num.size();
        vector<int>even;
        vector<int>odd;
        int n1=num;
        while(n1!=0){
            int digit=n1%10;
            if(digit%2==0){
                even.push_back(digit);
            }else{
                odd.push_back(digit);
            }
            n1=n1/10;
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int e=0, o=0;
        long long int result=0;
        long long int place=1;
        n1=num;
        while(n1!=0){
            int digit=n1%10;
            if(digit%2==0){
                result+=even[e++]*place;
            }else{
                result+=odd[o++]*place;
            }
            place=place*10;
            n1/=10;
        }
        return result;


        


    }
};