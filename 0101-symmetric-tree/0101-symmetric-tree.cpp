/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* root) {
        queue<TreeNode*> qu;
        qu.push(root);
        while (!qu.empty()) {
            int n = qu.size();
            vector<int> ans;
            for (int i = 0; i < n; i++) {
                TreeNode* temp = qu.front();
                if (temp == NULL) {
                    ans.push_back(-101);
                    qu.pop();
                } else {
                    ans.push_back(temp->val);
                    qu.pop();
                    if (temp->left)
                        qu.push(temp->left);
                    else
                        qu.push(NULL);
                    if (temp->right)
                        qu.push(temp->right);
                    else
                        qu.push(NULL);
                }
            }
            int m = ans.size();
            int r = m - 1;
            for (int i = 0; i < m / 2; i++) {
                if (ans[i] != ans[r])
                    return false;
                r--;
            }
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) { return solve(root); }
};