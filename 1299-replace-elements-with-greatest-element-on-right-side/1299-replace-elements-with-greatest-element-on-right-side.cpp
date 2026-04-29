class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            int maxi=-1;
            for(int j=i+1;j<n;j++){
                maxi=max(maxi,arr[j]);
            }
            if(maxi != -1){
                arr[i]=maxi;
            }
        }
        arr[n-1]=-1;
        return arr;
    }
};