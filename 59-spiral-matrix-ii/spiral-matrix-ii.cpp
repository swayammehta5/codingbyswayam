class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int num=n*n;
        vector<vector<int>>ans(n,vector<int>(n));
        int startingCol=0;
        int startingRow=0;
        int endingCol=n-1;
        int endingRow=n-1;
        int count=1;
        while(count<=num){
            for(int i=startingCol;i<=endingCol &&count<=num;i++){
                ans[startingRow][i]=count;
                count++;
            }
            startingRow++;
            for(int i=startingRow;i<=endingRow &&count<=num;i++){
                ans[i][endingCol]=count;
                count++;
            }
            endingCol--;
            for(int i=endingCol;i>=startingCol &&count<=num;i--){
                ans[endingRow][i]=count;
                count++;
            }
            endingRow--;
            for(int i=endingRow;i>=startingRow &&count<=num;i--){
                ans[i][startingCol] = count;
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};