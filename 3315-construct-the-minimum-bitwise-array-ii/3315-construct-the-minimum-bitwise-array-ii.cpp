class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        for (int i = 0; i < n; i++) {
           if(nums[i] != 2) ans[i]=(nums[i] - ((nums[i] + 1) & (-nums[i] - 1)) / 2);
        }
        return ans;
    }
};