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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans; 
        if(root==nullptr){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* current=q.front();
                q.pop();
                level.push_back(current->val);
                if(current->left!=nullptr) q.push(current->left);
                if(current->right!=nullptr) q.push(current->right);
            }
            int lize=level.size();
            double sum=0;
            for(int i=0;i<lize;i++){
                sum+=level[i];
            }
            double avg=sum/lize;
            ans.push_back(avg);
        }
        return ans;
    }
};