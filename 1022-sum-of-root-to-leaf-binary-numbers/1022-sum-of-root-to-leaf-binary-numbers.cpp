/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumRoot(TreeNode* root,int sum){
        if(root==nullptr) return 0;
        sum=sum*2 +root->val;
        if(root->left==nullptr && root->right==nullptr){
            return sum;
        }
        int leftNode=sumRoot(root->left,sum);
        int rightNode=sumRoot(root->right,sum);
        return leftNode + rightNode;
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        return sumRoot(root,0);
    }
};