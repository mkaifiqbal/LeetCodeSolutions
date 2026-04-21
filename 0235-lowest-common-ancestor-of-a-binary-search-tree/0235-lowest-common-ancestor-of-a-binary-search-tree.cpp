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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = root;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            qu.pop();
            if(ans==p || ans==q) return ans;
            int temp = ans->val;
            if(p->val > temp && q->val >temp){
                if(ans->right){
                    qu.push(ans->right);
                    ans = ans->right;
                }
            }else if(p->val < temp && q->val < temp){
                if(ans->left){
                    qu.push(ans->left);
                    ans = ans->left;
                }
            }else return ans;
        }
        return ans;
    }
};