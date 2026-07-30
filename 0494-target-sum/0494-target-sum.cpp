class Solution {
public:
    int solve(int indx,vector<int>& nums,int target,int sum,vector<vector<int>>&dp){
        if(indx==nums.size()) return sum==target;
        if(dp[indx][sum+1000]!=-1) return dp[indx][sum+1000];
        int sum1 = solve(indx+1,nums,target,sum+nums[indx],dp);
        int minus = solve(indx+1,nums,target,sum-nums[indx],dp);
        return dp[indx][sum+1000]=sum1+minus;
         
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n= nums.size();
        vector<vector<int>> dp(n,vector<int>(2001,-1));
        return solve(0,nums,target,0,dp);
    }
};