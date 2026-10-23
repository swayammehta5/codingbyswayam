class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int startingRow=0;
        int startingCol=0;
        int endingRow=n-1;
        int endingCol=m-1;
        int total=n*m;
        int count=0;
        vector<int>ans;
        while(count<total){
            for(int i=startingCol;i<=endingCol && count<total;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            for(int i=startingRow;i<=endingRow && count<total;i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            for(int i=endingCol;i>=startingCol && count<total;i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            for(int i=endingRow;i>=startingRow && count<total;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;

    }
};