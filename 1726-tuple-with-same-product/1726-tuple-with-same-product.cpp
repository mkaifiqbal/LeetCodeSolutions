class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int ans = 0;
        for(int i  =0; i<nums.size();i++)
        {
            for(int j = i+1; j<nums.size(); j++)
            {
                int product = nums[i] * nums[j];
                ans += 8 * mpp[product];
                mpp[product]++;
            }
        }
        return ans;
    }
};