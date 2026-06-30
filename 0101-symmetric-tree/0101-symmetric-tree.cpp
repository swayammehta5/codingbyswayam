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
    bool isSymmetricTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr){
            return true;
        }
        if(p== nullptr || q==nullptr){
            return false;
        }
        bool left= isSymmetricTree(p->left,q->right);
        bool right= isSymmetricTree(p->right,q->left);
        bool value=(p->val==q->val);
        return (left && right && value);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return isSymmetricTree(root->left,root->right);
    }
};