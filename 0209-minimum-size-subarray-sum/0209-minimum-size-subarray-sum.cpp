class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int l=0,r=0;
        int sum=0;
        int ans=INT_MAX;
        while(r<n){
            sum+=nums[r];
            r++;
            while(sum>=target){
                sum -= nums[l];
                l++;
             ans=min(ans,r-l+1);
            }
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};