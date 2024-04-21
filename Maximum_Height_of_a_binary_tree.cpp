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
int maxi = INT_MIN;
    int maxDepth(TreeNode* root) {
        TreeNode* node = root;
        if(!node){
            return 0;
        }
        int l=0,r=0;
        if(node->left){
            l=maxDepth(node->left);
        }
        if(node->right){
            r=maxDepth(node->right);
        }
        return 1+max(l,r);
        
        
    }
};
