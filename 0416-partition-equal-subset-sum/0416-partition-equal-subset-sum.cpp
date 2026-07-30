class Solution {
public:
    bool solve(int indx, vector<int>& nums,int target,vector<vector<int>>&dp){
        if(target==0) return true;
        if(indx>= nums.size()) return false;
         if(dp[indx][target]!=-1) return dp[indx][target];
        bool ntake=solve(indx+1,nums,target,dp);
        bool take = false;
        if(target >=nums[indx]){
            take = solve(indx+1,nums,target-nums[indx],dp);
        }
        //if(solve(indx+1,nums,target)) return true;;
        //if(target >=nums[indx] && solve(indx+1,nums,target-nums[indx])) return true;
        
        return dp[indx][target] = ntake || take;
    }
    bool canPartition(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        for(int i=0; i<n;i++){
            sum+= nums[i];
        }
        if(sum%2!=0) return false;
        vector<vector<int>> dp(n,vector<int>(sum/2+1,-1));
        return solve(0,nums,sum/2,dp);
    }
};