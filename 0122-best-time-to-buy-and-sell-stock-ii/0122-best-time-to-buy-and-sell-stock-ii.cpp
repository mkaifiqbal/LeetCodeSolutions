class Solution {
public:

    int solve(int indx,vector<int> & prices,int opt,vector<vector<int>>&dp){
        if(indx==prices.size()) return 0;
        if(dp[indx][opt]!=-1) return dp[indx][opt];

        if(opt){
            int buy= -prices[indx] +solve(indx+1,prices,0,dp);
            int nbuy= solve(indx+1,prices,1,dp);
            return dp[indx][opt]=max(buy,nbuy);
        }else{
            int sell= prices[indx] + solve(indx+1,prices,1,dp);
            int nsell = solve(indx+1,prices,0,dp);
            return dp[indx][opt]=max(sell,nsell);
        }
    }

    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size()+1,vector<int>(2,-1));
        return solve(0,prices,1,dp);
    }
};