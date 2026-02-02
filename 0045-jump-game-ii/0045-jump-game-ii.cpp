class Solution {
public:
    int solve(int indx, vector<int>&nums,vector<int> & dp){
        if(indx>= nums.size()-1) return 0;
        if(dp[indx]!=-1){
            return dp[indx] ;
        }
        int ans=INT_MAX;
        if(dp[indx]==-1){

            for(int i=indx+1;i<=indx+nums[indx];i++){
                int a= solve(i,nums,dp);
                if(a!=INT_MAX) ans = min(ans,1+a);
            }
        }
        dp[indx]=ans;
        return ans;
        
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return solve(0,nums,dp);
    }
};