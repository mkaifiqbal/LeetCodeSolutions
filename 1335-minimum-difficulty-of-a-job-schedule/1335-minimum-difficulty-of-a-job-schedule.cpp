class Solution {
public:
    vector<vector<int>> dp;
    int solve(vector<int>&jd, int n, int indx, int d){
        if(d==1){
            int maxd= jd[indx];
            for(int i=indx;i<n;i++){
                maxd= max(maxd,jd[i]);
            }
            return maxd;
        }
        if (dp[indx][d] != -1) return dp[indx][d];

        int maxd=jd[indx];
        int finalresult= INT_MAX;
        for(int i=indx;i<=n-d;i++){
            maxd= max(maxd,jd[i]);
            int result = maxd + solve(jd,n,i+1,d-1);
            finalresult = min(finalresult,result);
        }
        return dp[indx][d]= finalresult;

    }

    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if(d>n) return -1;
        dp.assign(n + 1, vector<int>(d + 1, -1));
        return solve(jobDifficulty,n,0,d);
    }
};