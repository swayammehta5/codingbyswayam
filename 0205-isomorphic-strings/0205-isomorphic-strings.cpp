class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mapST,mapTS;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            char c1=s[i];
            char c2=t[i];
            if(mapST.find(c1)==mapST.end() && mapTS.find(c2)==mapTS.end()){
                mapST[c1]=c2;
                mapTS[c2]=c1;
            }else{
                if(mapST[c1]!=c2 || mapTS[c2]!=c1){
                    return false;
                }
            }
        }
        return true;
    }
};