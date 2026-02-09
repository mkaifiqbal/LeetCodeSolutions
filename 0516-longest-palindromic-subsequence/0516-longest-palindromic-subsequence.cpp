class Solution {
public:

    int solve(int n, int m, string &s, string &s1, vector<vector<int>> &dp){
        if(n<0|| m<0) return 0;

        if(dp[n][m]!=-1) return dp[n][m];

        if(s[n]==s1[m]){
            return dp[n][m] = 1+ solve(n-1,m-1,s,s1,dp);
        }
        return dp[n][m] = max(solve(n-1,m,s,s1,dp), solve(n,m-1,s,s1,dp));
    }

    int longestPalindromeSubseq(string s) {
        string s1 = s;
        reverse(s1.begin(), s1.end());
        int n= s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(n-1,n-1,s,s1,dp);
    }
};