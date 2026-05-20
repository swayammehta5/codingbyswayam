class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n1=A.size();
        int n2=B.size();
        vector<int>ansA;
        vector<int>ansB;
        vector<int>ansC;
        for(int i=0;i<n1;i++){
            ansA.push_back(A[i]);
            ansB.push_back(B[i]);
            int count=0;
            for(int j=0;j<ansA.size();j++){
                for(int k=0;k<ansB.size();k++){
                    if(ansA[j]==ansB[k]){
                        count++;
                        break;
                    }
                }
            }
            ansC.push_back(count);
        }
        return ansC;
    }
};