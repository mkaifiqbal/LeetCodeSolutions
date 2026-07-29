class Solution {
public:
    int solve(int indx,int end, vector<int>& nums,vector<int>&dp){
        if(indx>= end) return 0;
        if(dp[indx]!= -1) return dp[indx];
        int pick= nums[indx]+ solve(indx+2,end,nums,dp);
        int npick= solve(indx+1,end,nums,dp);
        return dp[indx]=max(pick,npick);
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1)return nums[0];
        vector<int> dp(n+1,-1),dp1(n+1,-1);
        int pick= solve(0,n-1,nums,dp);
        int npick = solve(1,n,nums,dp1);
        return max(pick,npick);
    }
};