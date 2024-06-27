class Solution {
public:
    int rob(vector<int>& a) {
        int n=a.size();
        // vector<int>dp(n+1,0);
        // dp[0]=a[0];

        int prev=a[0];
        int prev2=0;
        int curri=0;

        for(int i=1;i<n;i++)
        {
            int take=a[i];
            int nottake=0 + prev;
            if(i-1>0)
            take+=prev2;

            curri=max(take,nottake);
            prev2=prev;
            prev=curri;
            
        }

        return prev;
    }
};