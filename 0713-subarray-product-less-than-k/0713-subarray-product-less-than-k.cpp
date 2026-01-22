class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0, l=0, pr=1;
        for(int i=0;i< nums.size();i++){
            pr *= nums[i];
            while(pr>= k && l<=i){
                pr /= nums[l];
                l++;
            }
            if (pr==0) return ans;
            ans += (i-l+1);

        }
        return ans;
    }
};