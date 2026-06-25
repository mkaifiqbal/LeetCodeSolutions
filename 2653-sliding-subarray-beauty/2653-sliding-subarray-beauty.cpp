class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ch(51, 0);
        vector<int> ans;
        int negcount = 0;

        for (int i = 0; i < k; i++) {
            if (nums[i] < 0) {
                ch[-1 * nums[i]] += 1;
                negcount++;
            }
        }
        for (int i = k; i < n; i++) {
            int temp = x;
            int count = 0;
            int b = 0;
            for (int j = 50; j >= 0; j--) {
                if (ch[j] > 0)
                    count += ch[j];
                if (count >= temp) {
                    b = -1 * j;
                    break;
                }
            }
            ans.push_back(b);
            if (nums[i] < 0) {
                ch[-1 * nums[i]] += 1;
                negcount++;
            }
            if (nums[i - k] < 0) {
                ch[-1 * nums[i - k]] -= 1;
                negcount--;
            }
        }
        int temp = x;
        int count = 0;
        int c=0;
        for (int j = 50; j >= 0; j--) {
            if (ch[j] > 0)
                count += ch[j];
            if (count >= temp) {
                c=-1 *j;
                break;
            }
        }
        ans.push_back(c);

        return ans;
    }
};