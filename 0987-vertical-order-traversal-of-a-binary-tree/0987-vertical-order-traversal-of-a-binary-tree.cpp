class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, vector<int>>> nodes;
        queue<pair<TreeNode*, pair<int,int>>> q;
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        q.push({root, {0,0}});
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            TreeNode* node = temp.first;
            int col = temp.second.first;
            int row = temp.second.second;
            nodes[col][row].push_back(node->val);
            if(node->left)
                q.push({node->left, {col-1, row+1}});
            if(node->right)
                q.push({node->right, {col+1, row+1}});
        }
        for(auto i : nodes){
            vector<int> column;
            for(auto j : i.second){
                sort(j.second.begin(), j.second.end());
                for(auto k : j.second)
                    column.push_back(k);
            }
            ans.push_back(column);
        }

        return ans;
    }
};