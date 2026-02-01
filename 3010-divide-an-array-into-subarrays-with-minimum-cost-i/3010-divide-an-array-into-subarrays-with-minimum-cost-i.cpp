class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int first = nums[0];
        int mina = INT_MAX;
        int minb = INT_MAX;
        
        for (int i = 1; i < n; i++) {
            if (nums[i] < mina) {
                minb = mina;
                mina = nums[i];
            } else if (nums[i] < minb) {
                minb = nums[i];
            }
        }
        
        return first + mina + minb;
    }
};