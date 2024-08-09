class Solution {
    private:
    int solve(vector<int>a,int k)
    {
        int l=0;
        int r=0;
        int n=a.size();
        int odd=0;
        int cnt=0;

        if(k<0)
        return 0;

        while(r<n)
        {
            
        if(a[r]&1)
        odd++;

        while(odd>k)
        {
            if(a[l]&1)
            odd--;

            l++;
        }

        cnt+=(r-l+1);

        r++;
        }

        return cnt;
    }
public:
    int numberOfSubarrays(vector<int>& a, int k) {
        return solve(a,k) - solve(a,k-1);
    }
};