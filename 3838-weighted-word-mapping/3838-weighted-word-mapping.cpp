class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string str="";
        for(int i=0;i<n;i++){
            string ch=words[i];
            int sum=0;
            for(int j=0;j<ch.size();j++){
                sum+=weights[words[i][j]-'a'];
            }
            int rem=sum%26;
            str+=('z'-rem);
        }
        return str;
    }
};