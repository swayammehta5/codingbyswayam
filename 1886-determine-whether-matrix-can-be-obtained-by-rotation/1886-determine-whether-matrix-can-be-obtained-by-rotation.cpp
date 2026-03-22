class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        bool ans=false;
        int total=0;
        while(!ans && total<4){
            if(mat==target){
                ans=true;
            }
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i=0;i<n;i++){
                int s=0;
                int e=n-1;
                while(s<e){
                    swap(mat[i][s],mat[i][e]);
                    s++;
                    e--;
                }
            }
            total++;
        }
        return ans;
    }
};