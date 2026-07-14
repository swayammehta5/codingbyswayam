class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>set;
        int left=0;
        int maxLen=0;
        for(int right=0;right<s.length();right++){
            char current=s[right];
            while(set.count(current)){
                set.erase(s[left]);
                left++;
            }
            set.insert(current);
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};