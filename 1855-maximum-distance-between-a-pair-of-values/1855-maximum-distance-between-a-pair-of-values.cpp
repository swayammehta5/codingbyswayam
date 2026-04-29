class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int maxi=0;
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                int diff=j-i;
                maxi=max(maxi,diff);
                j++;
            }else{
                i++;
                if(i>j){
                    j=i;
                }
            }
        }
        return maxi;
    }
};