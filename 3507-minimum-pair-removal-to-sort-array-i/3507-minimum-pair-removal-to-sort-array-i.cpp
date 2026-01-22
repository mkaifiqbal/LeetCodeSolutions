class Solution {
public:
    bool check(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1])
                return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;
        while (!check(nums)) {
            int n = nums.size();
            int minsum = INT_MAX;
            int indx=0;
            for(int i=0;i<n-1;i++){
                int sum = nums[i]+nums[i+1];
                if(minsum> sum){
                    minsum= sum;
                    indx=i;
                }
            }
            nums[indx] =nums[indx]+ nums[indx+1];
            nums.erase(nums.begin()+indx+1);
            count++;
        }
        return count;
    }
};