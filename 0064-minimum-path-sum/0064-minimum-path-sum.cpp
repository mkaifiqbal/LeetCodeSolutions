class Solution {
public:
    int solve(int row,int col, vector<vector<int>>& grid,vector<vector<int>>&dp){
        if(row==grid.size()-1 && col== grid[0].size()-1){
            return grid[row][col];
        }
        if(row>=grid.size() || col>=grid[0].size()){
            return INT_MAX;
        }
        if(dp[row][col]!=-1) return dp[row][col];
        int left= solve(row,col+1,grid,dp);
        int down= solve(row+1,col,grid,dp);
        return dp[row][col]=grid[row][col] +min(left,down);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m= grid[0].size();
        vector<vector<int>> dp(n+1,vector<int>(m,-1));
        return solve(0,0,grid,dp);
    }
};