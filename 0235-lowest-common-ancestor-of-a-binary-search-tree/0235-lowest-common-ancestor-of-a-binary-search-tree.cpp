/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool findPath(TreeNode* root,int target,vector<TreeNode*>& path){
        if(root==NULL) return false;
        path.push_back(root);
        if(root->val == target)return true;

        if(findPath(root->left,target,path)||findPath(root->right,target,path)){
            return true;
        }
        path.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    //     vector<TreeNode*> pathP;
    //     vector<TreeNode*> pathQ;
    //     findPath(root,p->val,pathP);
    //     findPath(root,q->val,pathQ);
    //     TreeNode* ans=NULL;
    //     int i=0;
    //     while(i<pathP.size() && i<pathQ.size()){
    //         if(pathP[i]==pathQ[i]){
    //             ans=pathP[i];
    //         }else{
    //             break;
    //         }
    //         i++;
    //     }
    //     return ans;
        while (root!=NULL) {
            if (p->val<root->val && q->val<root->val) {
                root=root->left;
            }
            else if (p->val>root->val && q->val>root->val) {
                root=root->right;
            }
            else {
                return root;
            }
        }
        return NULL;
    }
};