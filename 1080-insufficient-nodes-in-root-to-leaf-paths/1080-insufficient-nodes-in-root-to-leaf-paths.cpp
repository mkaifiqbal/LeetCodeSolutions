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
    TreeNode* solve(TreeNode* root, int limit){
        if(!root) return NULL;

        if (root->left == nullptr && root->right ==nullptr)  {
            if(root->val<limit){
                return nullptr;
            }
            return root;
        }
        root->left= solve(root->left,limit- root->val);
        root->right= solve(root->right,limit - root->val);
        if(root->left == nullptr && root->right ==nullptr ){
                return nullptr;
        }
        return root;
    }
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        return solve(root,limit);
    }
};