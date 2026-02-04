class Solution {
public:
    int solve(int indx,vector<int>& coins, int amount,vector<vector<int>> & dp){
        if( amount==0) return 0;
        if(indx==coins.size()) return 1e9;

        if(dp[indx][amount] != -1) return dp[indx][amount];
        int nt = solve(indx+1,coins,amount,dp);
        int take = 1e9;
        if(coins[indx]<=amount){
            take = 1+ solve(indx,coins,amount-coins[indx],dp);
        }
        return dp[indx][amount]=min(nt,take);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans=solve(0,coins,amount,dp);
        if(ans==1e9) return -1;
        return ans;
    }
};