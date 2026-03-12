class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length();
        int freq[26]={0};
        int vis[26]={0};
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        string ans="";
        // sort(s.begin(),s.end());
        // auto it=unique(s.begin(),s.end());
        // s.erase(it,s.end());
        // return s;
        for(int i=0;i<n;i++){
            freq[s[i]-'a']--;
            if(vis[s[i]-'a']) continue;
            while(ans.size()>0 && ans.back()>s[i] && freq[ans.back()-'a']>0){
                vis[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans.push_back(s[i]);
            vis[s[i]-'a']=true;
        }
        return ans;
    }
};