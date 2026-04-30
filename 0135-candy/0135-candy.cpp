class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> res(ratings.size(),1);
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){
                res[i]=res[i-1]+1;
            }
        }
        int count=res[n-1];
        for (int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                res[i]=max(res[i],res[i+1]+1);
            }
            count+=res[i];
        }
        return count;
    }
};
/*
[3,4,5,2,8,9,1,4]
[1,2,3,1,2,3,1,2] after 1 loop
[1,2,3,1,2,3,1,2]
 in pep class online */