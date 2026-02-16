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
    int lc,rc;
    int solve(TreeNode* root, int x){
        if(root==NULL) return 0;

        int l = solve(root->left,x);
        int r = solve(root->right,x);
        if(root->val == x){
            lc = l;
            rc =r;
        }

        return l+r+1;
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        solve(root,x);
        int parent = n- (lc+rc+1);
        int mx = max({lc,rc,parent});
        return mx >n/2;
    }
};