class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int store=0;
        int j=n-1;
        int i=0;
        while(i<j){
            int h= min(height[i],height[j])*(j-i);
            if(h>store){
                store=h;
            }
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return store;

    }
};