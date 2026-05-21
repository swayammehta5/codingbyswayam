class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>st;
        for(int i=0;i<arr1.size();i++){
            int x=arr1[i];
            while(x>0){
                st.insert(x);
                x/=10;
            }
        }
        int ans=0;
        for(int i=0;i<arr2.size();i++){
            int x=arr2[i];
            while(x>0){
                if(st.count(x)){
                    int len=0;
                    int temp=x;
                    while(temp>0){
                        len++;
                        temp/=10;
                    }
                    if(len>ans){
                        ans=len;
                    }
                    break;
                }
                x/=10;
            }
        }
        return ans;
    }
};