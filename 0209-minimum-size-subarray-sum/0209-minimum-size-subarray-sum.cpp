class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int a = 0;
        int b = 0;
        int ans= INT_MAX;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            while (sum >= target && a < n) {
                ans = min(ans, i-a+1);
                sum -= nums[a];
                a++;
            }
        }
        if(ans== INT_MAX) return 0;
        return ans;
    }
};