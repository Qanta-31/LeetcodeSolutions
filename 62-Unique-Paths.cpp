class Solution {
    private:
    int solve(int n,int m,vector<vector<int>>&dp)
    {
        if(n==1 || m==1)
        return 1;

        if(dp[n][m]!=-1)
        return dp[n][m];

        return dp[n][m] = solve(n-1,m,dp) + solve(n,m-1,dp);
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(n,m,dp);
    }
};