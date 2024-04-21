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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;if(!root){return ans;}
        queue<TreeNode*> q;
        q.push(root);
        
        
        while(!q.empty()){
            

            int n = q.size();
            
            vector<int> single;
            
            for(int i = 0;i<n;i++){
                TreeNode* bloop = q.front();q.pop();
                 if(bloop->left){q.push(bloop->left);}
                if(bloop->right){q.push(bloop->right);}
             single.push_back(bloop->val);    
             

            }
            ans.push_back(single);
           

        }

        return ans;
    }
};
