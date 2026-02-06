class Solution {
public:
    int n, m;
    int solve(int row, int col, vector<vector<int>>& matrix,vector<vector<int>> &dp){
        if(col<0 || col>=m){
            return INT_MAX;
        }
        if(row== n-1){
            return matrix[row][col];
        }
        if(dp[row][col]!=INT_MAX) return dp[row][col];
        int a= solve(row+1,col-1,matrix,dp);
        int b= solve(row+1,col,matrix,dp);
        int c= solve(row+1,col+1,matrix,dp);
        int best = min({a,b,c});
        if(best==INT_MAX) return dp[row][col] =INT_MAX;
        
        return dp[row][col]= matrix[row][col]+best;

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        n= matrix.size();
        m= matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
        int ans=INT_MAX;
        for(int i=0; i<n;i++){
            ans = min(ans,solve(0,i,matrix,dp));
        }
        return ans;
    }
};