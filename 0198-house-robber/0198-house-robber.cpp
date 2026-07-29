class Solution {
public:
    int solve(vector<int>& nums,int indx,vector<int> &dp){
        if(indx>=nums.size()) return 0;
        if(dp[indx]!=-1) return dp[indx];
        int take = nums[indx]+solve(nums,indx+2,dp);
        int ntake = solve(nums,indx+1,dp);
        return dp[indx]=max(take,ntake);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return solve(nums,0,dp);
        
    }
};