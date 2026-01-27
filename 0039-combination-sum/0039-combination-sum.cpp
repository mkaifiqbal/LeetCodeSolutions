class Solution {
public:
    vector<int> current;
    void solve(int indx, vector<int>& arr, int target,
               vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }
        if (target < 0)
            return;
        for (int i = indx; i < arr.size(); i++) {
            current.push_back(arr[i]);
            solve(i, arr, target - arr[i], ans);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        solve(0, arr, target, ans);
        return ans;
    }
};