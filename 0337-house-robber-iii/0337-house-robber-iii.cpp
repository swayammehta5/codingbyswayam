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
    pair<int,int> solve(TreeNode* root){
        if(root==NULL) {
            pair<int,int> p=make_pair(0,0);
            return p;
        }
        pair<int,int>leftSum=solve(root->left);
        pair<int,int>rightSum=solve(root->right);
        pair<int,int>res;
        res.first= root->val + leftSum.second +rightSum.second;
        res.second =max(leftSum.first,leftSum.second)+ max(rightSum.first,rightSum.second);
        return res;


    }
    int rob(TreeNode* root) {
       pair<int,int> ans=solve(root);
       return max(ans.first,ans.second); 
    }
};