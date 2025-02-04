class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n= nums.size();
        int maxsum =0;
        int sum =nums[0];
        for (int i=1;i<n;i++){
            if (nums[i-1]< nums[i]) sum += nums[i];
            else{
                maxsum= max(maxsum,sum);
                sum = nums[i];

            }
        }
        return max(maxsum,sum);
    }
};
