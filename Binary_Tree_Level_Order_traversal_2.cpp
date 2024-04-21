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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root){return ans;}
        queue<TreeNode*> q;
        
        q.push(root);
        while(!q.empty()){
            vector<int> first;
            int n = q.size();
            for(int i = 0;i<n;i++){
                TreeNode* hea = q.front();
                q.pop();
                if(hea->left){q.push(hea->left);}
                if(hea->right){q.push(hea->right);}
            first.push_back(hea->val);
            }
            ans.push_back(first);
        }
        int n = ans.size();
        stack<vector<int>> poplu;
        for(int i = 0;i<n;i++){
            poplu.push(ans[i]);
            
        }
                for(int i = 0;i<n;i++){
            ans[i]=poplu.top();
            poplu.pop();
            
        }
    return ans;}
};
