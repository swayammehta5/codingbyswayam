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
    void solve(TreeNode* root, int targetSum,vector<vector<int>>&result,vector<int>&ans){
        if(root==nullptr) return;
        ans.push_back(root->val);
        if(root->left==nullptr && root->right==nullptr){
            if(targetSum==root->val){
                result.push_back(ans);
            }
        }
        solve(root->left,targetSum-root->val,result,ans);
        solve(root->right,targetSum-root->val,result,ans);
        ans.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        if(root==nullptr){
            return result;
        }
        vector<int>ans;
        solve(root,targetSum,result,ans);
        return result;
    }
};