class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> ans;
        for(int i=0;i<text.size();i++){
            char ch=text[i];
            if(ch=='b' || ch=='a'|| ch=='l' ||ch=='o'|| ch=='n'){
                ans[ch]++;
            }
        }
        return min({ans['b'],ans['a'],ans['l']/2,ans['o']/2,ans['n']});
    }
};