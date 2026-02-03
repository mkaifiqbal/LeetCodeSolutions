class Solution {
public:
    int solve(int indx, vector<int> &nums,vector<int> &dp){
        if(indx>=nums.size()){
            return 0;
        }
        if(dp[indx]!=-1){
            return dp[indx];
        }
        int ans=0;
        ans = nums[indx]+ solve(indx+2,nums,dp);
        int ans1=0;
        ans1= solve(indx+1,nums,dp);
        return dp[indx]=max(ans,ans1);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return solve(0,nums,dp);
    }
};