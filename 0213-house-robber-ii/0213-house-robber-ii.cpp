class Solution {
public:
    int solve(int indx,int end,vector<int>&nums,vector<int> &dp){
        if(indx>end){
            return 0;
        }
        if(dp[indx]!=-1) return dp[indx];
        int nt = solve(indx+1,end,nums,dp);
        int take =0;
        take = nums[indx]+solve(indx+2,end,nums,dp);
        return dp[indx]= max(nt,take);
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        vector<int> dp(n+1,-1);
        vector<int> dp1(n+1,-1);
        if(n==1) return nums[0];

        int a= solve(1,n-1,nums,dp);
        int b = solve(0,n-2,nums,dp1);
        return max(a,b);
    }
};