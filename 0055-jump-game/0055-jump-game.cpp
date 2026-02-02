class Solution {
public:
    bool solve(int indx, vector<int>& nums, vector<int>& dp) {
        if (indx >= nums.size() - 1) {
            return true;
        }
        if (dp[indx] == 0) {
            return false;
        }
        if (dp[indx] == -1) {
            for (int i = indx + 1; i <= indx + nums[indx]; i++) {
                if (solve(i, nums,dp))
                    return true;
                else{
                    dp[i]= 0;
                }
            }
        }

        return false;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return solve(0, nums, dp);
    }
};