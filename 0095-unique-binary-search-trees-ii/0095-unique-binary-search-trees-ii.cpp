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
    vector<TreeNode*> build(int start,int end){
        vector<TreeNode*> trees;
        if(start>end){
            trees.push_back(NULL);
            return trees;
        }
        for(int root=start;root<=end;root++){
            vector<TreeNode*>leftTrees=build(start,root-1);
            vector<TreeNode*>rightTrees=build(root+1,end);
            for(int i=0;i<leftTrees.size();i++){
                for(int j=0;j<rightTrees.size();j++){
                    TreeNode* node = new TreeNode(root);
                    node->left=leftTrees[i];
                    node->right=rightTrees[j];
                    trees.push_back(node);
                }
            }

        }
        return trees;
    }
    vector<TreeNode*> generateTrees(int n) {
        if(n==0) return {};
        return build(1,n);
    }
};