class Solution {
    private:
    int solve(vector<int>&a ,int n,vector<int>&dp)
    {
        int prev2=0;
        int prev=a[0];
        for(int i=1;i<n;i++)
        {
            int take=a[i];
            int nottake=0 + prev;
            if(i-1>0)
            take+=prev2;

            int curri=max(take,nottake);

            prev2=prev;
            prev=curri;
        }
        return prev;
    }
public:
    int rob(vector<int>& a) {
        int n=a.size();
        if(n==1)
        return a[0];
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            v1.push_back(a[i]);
            if(i!=n-1)
            v2.push_back(a[i]);
        }

        vector<int>dp(n,0);
        int ans1=solve(v1,n-1,dp);
        vector<int>dp1(n,0);
        int ans2= solve(v2,n-1,dp1);

        return max(ans1,ans2);
    }
};