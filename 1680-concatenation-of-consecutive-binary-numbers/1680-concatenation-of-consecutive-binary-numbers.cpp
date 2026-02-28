class Solution {
public:
    int concatenatedBinary(int n) {
        // run loop till n 

        //then i to binary string mai convert  convert karege and string temp add karge
        // then binary string ka add karege and return karege result;
        string ans="";
        for(int i=1;i<=n;i++){
            string binary= bitset<32>(i).to_string();
            binary = binary.substr(binary.find('1'));
            ans += binary;
        }
        long long int sum=0;
        int mod=1e9+7;
        for(int i=0;i<ans.size();i++){
            sum=(sum*2 + (ans[i]-'0'))%mod;
        }
        return sum;
        // What is 1e9 + 7 ?

        // It means:

        // 1 × 10⁹ + 7
        // = 1000000000 + 7
        // = 1000000007

    }
};