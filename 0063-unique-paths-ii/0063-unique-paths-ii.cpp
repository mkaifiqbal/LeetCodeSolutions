class Solution {
public:
    int solve(int row,int col, vector<vector<int>>& matrix,vector<vector<int>> &dp){
        if(row>matrix.size()-1 || col >matrix[0].size()-1 || matrix[row][col]==1 ){
            return 0;
        }
        if(row==matrix.size()-1 && col == matrix[0].size()-1){
            return 1;
        }
        if(dp[row][col] != -1) return dp[row][col];
        int right= solve(row,col+1,matrix,dp);
        int down = solve(row+1,col,matrix,dp);
        return dp[row][col] =right + down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n= obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(0,0,obstacleGrid,dp);
    }
};