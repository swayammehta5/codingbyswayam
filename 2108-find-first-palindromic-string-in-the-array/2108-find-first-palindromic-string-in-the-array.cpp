class Solution {
public:
    bool CheckPalindrome(string str){
        int left=0;
        int right=str.size()-1;
        while(left<right){
            if(str[left]!=str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            if(CheckPalindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
};