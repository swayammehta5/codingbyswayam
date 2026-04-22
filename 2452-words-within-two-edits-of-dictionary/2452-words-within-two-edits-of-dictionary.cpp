#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>result;
        for(int i=0;i<queries.size();i++){
            string q=queries[i];
            for(int j=0;j<dictionary.size();j++){
                string d=dictionary[j];
                int diff=0;
                for(int k=0;k<q.length();k++){
                    if(q[k]!=d[k]){
                        diff++;
                    }
                }
                if(diff<=2){
                    result.push_back(q);
                    break; // move to next query
                }
            }
        }
        return result;
    }
};