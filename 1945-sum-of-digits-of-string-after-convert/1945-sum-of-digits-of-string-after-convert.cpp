class Solution {
public:
    int getLucky(string s, int k) {
        map<char,int> mp;
        for(char ch='a';ch<='z';ch++){
            mp[ch]=ch-'a'+1;
        }
        string str= "";
        for(int i=0;i<s.size();i++){
            str += to_string(mp[s[i]]);
        }
        int result = 0;
        while(k--){
            int sum=0;
            for(int i=0;i<str.size();i++) {
                sum += str[i]-'0';
            }
            result=sum;
            str=to_string(sum);
        }
        return result;
    }
};