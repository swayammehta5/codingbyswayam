class Solution {
public:
    bool solve(vector<int>& arr, int index,vector<bool>&visited){
        int n=arr.size();
        if(index<0 || index>=n) return false;
        if(visited[index]) return false;
        if(arr[index]==0) return true;
        visited[index] =true;
        return solve(arr,index-arr[index],visited)||solve(arr,index+arr[index],visited);
    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<bool>visited(n,false);
        return solve(arr,start,visited);
    }
};