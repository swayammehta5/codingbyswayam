class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        // Store frequencies of s1
        for(int i=0;i<s1.length();i++){
            freq1[s1[i]-'a']++;
        }
        int left=0;
        for(int right=0;right<s2.length();right++){
            // Add the current character to the window
            freq2[s2[right]-'a']++;
            // If window becomes larger than s1,
            // remove the left character
            if(right-left+1 >s1.length()){
                freq2[s2[left]-'a']--;
                left++;
            }
            // Compare the character frequencies
            if(freq1==freq2){
                return true;
            }
        }
        return false;
    }
};