class Solution {
public:
    int convertBin(string s){
        long long int len=s.size();
        long long int decimal=0;
        for( long int i=0;i<len;i++){
            decimal=decimal*2 +(s[i]-'0');
        }
        return decimal;
    }
    int numSteps(string s) {
        // long long int number= convertBin(s);
        // long long int n=number;
        // int count=0;
        // while(n!=1){
        //     if(n%2==0){
        //         n=n/2;
        //     }else{
        //         n=n+1;
        //     }
        //     count++;
        // }
        // return count;
        int count=0;
        while(s!="1"){
            if(s.back()=='0'){
                s.pop_back();
            }else{
                int i=s.length()-1;
                while(i>=0 && s[i]=='1'){
                    s[i]='0';
                    i--;
                }
                if(i>=0){
                    s[i]='1';
                }else{
                    s='1'+s;
                }
            }
            count++;
        }
        return count;

    }
};