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


 // love babber video no 73
class Solution {
public:
  TreeNode* createParentMapping(TreeNode* root, int target,map<TreeNode*,TreeNode*>&nodeToParent){
    TreeNode* res=NULL;
    queue<TreeNode*>q;
    q.push(root);
    nodeToParent[root]=NULL;
    while(!q.empty()){
        TreeNode* front=q.front();
        q.pop();
        if(front->val==target){
            res=front;
        }
        if(front->left){
            nodeToParent[front->left]=front;
            q.push(front->left);
        }
        
        if(front->right){
            nodeToParent[front->right]=front;
            q.push(front->right);
        }
    }
    return res;
    
  }
  int burnTree(TreeNode* root,map<TreeNode*,TreeNode*>&nodeToParent){
      map<TreeNode*,bool>visited;
      queue<TreeNode*>q;
      q.push(root);
      visited[root]=true;
      int time=0;
      while(!q.empty()){
          bool flag=0;
          int size=q.size();
          for(int i=0;i<size;i++){
              //process neighbouring nodes
                  TreeNode* front=q.front();
                  q.pop();
              if(front->left && !visited[front->left]){
                  flag=1;
                  q.push(front->left);
                  visited[front->left]=1;
              }
              if(front->right && !visited[front->right]){
                  flag=1;
                  q.push(front->right);
                  visited[front->right]=1;
              }
              if(nodeToParent[front] && !visited[nodeToParent[front]]){
                  flag=1;
                  q.push(nodeToParent[front]);
                  visited[nodeToParent[front]]=1;
                  
              }
          }
          if(flag==1){
              time++;
          }
      }
      return time;
  }
    int amountOfTime(TreeNode* root, int start) {
        //algo 
        //step1 : create nodeToParent mapping
        //step2: find the target node
        //step3: burn the tree in min tree
        map<TreeNode*,TreeNode*>nodeToParent;
        // Node* 1 : node
        //Node* 2:parent node
        TreeNode* targetNode=createParentMapping(root,start,nodeToParent);
        int ans=burnTree(targetNode,nodeToParent);
        return ans;
    }
};
