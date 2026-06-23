// love babber video 61
class Solution {
public:
    vector<int> nextSmallerElement(int* heights,int n){
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            int curr=heights[i];
            while(s.top()!=-1 && heights[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> prevSmallerElement(int* heights,int n){
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int curr=heights[i];
            while(s.top()!=-1 && heights[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(int* heights ,int n) {
        // int n=heights.size();
        vector<int> next(n);
        next=nextSmallerElement(heights,n);
        vector<int> prev(n);
        prev=prevSmallerElement(heights,n);
        int area=INT_MIN;
        for(int i=0;i<n;i++){
            int l=heights[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            int newarea=l*b;
            area=max(area,newarea);
        }
        return area;
    }
    int maximalRectangle(vector<vector<char>>& M) {
        // compute area of first row
        int n=M.size();
        int m=M[0].size();
        vector<int> height(m,0);
        int maxArea=0;
        // int area=largestRectangleArea(M[0],m);
        int maxarea=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //row update by adding previous rowss value 
                if(M[i][j]=='1'){
                    // M[i][j]=M[i][j]+M[i-1][j];
                    height[j]+=1;
                }else{
                    // M[i][j]=0;
                    height[j]=0;
                }
            }
            maxarea =max(maxarea,largestRectangleArea(height.data(),m));
        }
        //entire row is update;
        return maxarea;
    }
};