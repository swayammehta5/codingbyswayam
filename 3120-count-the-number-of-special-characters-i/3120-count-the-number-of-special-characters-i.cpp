class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        int count=0;
        for(int i=0;i<n;i++){
            char ch=word[i];
            if(islower(ch)){
                bool found=false;
                bool alreadySeen = false;
                for(int k = 0; k < i; k++){
                    if(word[k] == ch){
                        alreadySeen = true;
                        break;
                    }
                }
                if(alreadySeen) continue;
                for(int j=0;j<n;j++){
                    if(isupper(word[j]) && word[j]==toupper(ch)){
                        found=true;
                        break;
                    }
                }
                if(found){
                    count++;
                }
            }
        }
        return count;
    }
};