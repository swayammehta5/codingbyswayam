class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m =mat[0].size();
        vector<vector<int>> matrix(n,vector<int>(m));
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<m;j++){
                    matrix[i][j]=mat[i][(j+k)%m];
                }
            }else{
                for(int j=0;j<m;j++){
                    matrix[i][j]=mat[i][(j-k%m+m)%m];
                }
            }
        }
        if(matrix!=mat) return false;
        return true;
    }
};