class Solution {
public:
    bool palindrome(string s){
        int n=s.length();
        int start=0;
        int end=n-1;
        while(start<end){
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    void solve(string s,int index,vector<string>ans,vector<vector<string>>&output){
        if(index==s.length()){
            output.push_back(ans);
            return;
        }
        for(int i=index;i<s.length();i++){
            string temp =s.substr(index,i-index+1);
            if(palindrome(temp)){
                ans.push_back(temp);
                solve(s,i+1,ans,output);
                ans.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>ans;
        vector<vector<string>>output;
        solve (s,0,ans,output);
        return output;
    }
};