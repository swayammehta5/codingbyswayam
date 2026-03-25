// love babber video no 72
class Solution {
public:
    int findPosition(vector<int> &in, int element, int n){
        for(int i=0;i<n;i++){
            if(in[i]==element)
                return i;
        }
        return -1;
    }

    TreeNode* solve(vector<int> &pre,vector<int> &in,int &index,
                    int inorderStart,int inorderEnd,int n){

        if(index>=n || inorderStart>inorderEnd){
            return NULL;
        }

        int element=pre[index++];
        TreeNode* root=new TreeNode(element);

        int position=findPosition(in,element,n);

        root->left=solve(pre,in,index,inorderStart,position-1,n);
        root->right=solve(pre,in,index,position+1,inorderEnd,n);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index=0;
        int n=inorder.size();

        return solve(preorder,inorder,index,0,n-1,n);
    }
};