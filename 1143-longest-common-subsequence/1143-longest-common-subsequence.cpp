class Solution {
public:
    int solve(int indx1, int indx2, string & s1, string& s2,vector<vector<int>>& dp){
        if(indx1<0 || indx2 <0){
            return 0;
        }
        if(dp[indx1][indx2]!=-1){
            return dp[indx1][indx2];
        }
        if(s1[indx1]==s2[indx2] ){
            return dp[indx1][indx2]=solve(indx1-1, indx2-1, s1,s2,dp)+1;
        }
        return dp[indx1][indx2]=max(solve(indx1-1,indx2,s1,s2,dp), solve(indx1,indx2-1,s1,s2,dp));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int indx1= text1.size();
        int indx2= text2.size();
        vector<vector<int>> dp(indx1+1,vector<int>(indx2+1,-1));
        return solve(indx1-1,indx2-1,text1,text2,dp);
    }
};