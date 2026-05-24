class Solution {
public:
    vector<int>t;
    int solve(vector<int>&arr, int i,int d){
        int n=arr.size();
        if(t[i]!=-1) return t[i];
        int result=1;
        for(int j=i-1;j>=max(0,i-d);j--){
            if(arr[j]>=arr[i]) break;
            result=max(result,1+solve(arr,j,d));
        }
        for(int j=i+1;j<=min(n-1,i+d);j++){
            if(arr[j]>=arr[i]) break;
            result=max(result,1+solve(arr,j,d));
        }
        return t[i]=result;
    }
    int maxJumps(vector<int>& arr, int d) {
        int n=arr.size();
        t.resize(n+1,-1);
        int result=1;
        for(int i=0;i<n;i++){
            result=max(result,solve(arr,i,d));
        }
        return result;
    }
};