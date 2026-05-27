class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        int count=0;
        for(int i=0;i<n;i++){
            char ch=word[i];
            if(islower(ch)){

                // bool check=false;
                bool alreadyseen=false;
                for(int j=0;j<i;j++){
                    if(ch==word[j]){
                        alreadyseen=true;
                        break;
                    }
                }
                if(alreadyseen) continue;
                bool lowerAfterUpper=false;
                bool upperFound=false;
                for(int j=0;j<n;j++){
                    if(isupper(word[j]) &&word[j]==toupper(ch)){
                        upperFound=true;
                        for(int k=j;k<n;k++){
                            if(word[k]==ch){
                                lowerAfterUpper=true;
                                break;
                            }
                        }
                        break;
                    }
                }
                if(upperFound && !lowerAfterUpper) count++; 
            }
        }
        return count;
    }
};