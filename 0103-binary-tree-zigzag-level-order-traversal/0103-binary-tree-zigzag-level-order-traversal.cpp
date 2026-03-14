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
    void solve(TreeNode* root,int level,vector<vector<int>>& result){
        if(root==nullptr) return;
        if(level==result.size()){
            result.push_back(vector<int>());
        }
        if(level%2==0){
            result[level].push_back(root->val);
        }else{
            result[level].insert(result[level].begin(),root->val);
        }
        solve(root->left,level+1,result);
        solve(root->right,level+1,result);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        solve(root,0,result);
        return result;
    }
};