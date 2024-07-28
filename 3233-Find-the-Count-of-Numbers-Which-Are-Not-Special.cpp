class Solution {
    void sieve(vector<long long int>&prime,unordered_set<long long int>&primesquare,int r)
    {
        prime[0]=prime[1]=0;
        for(long long int i=2;i<=sqrt(r);i++)
        {
            if(prime[i])
            {
                primesquare.insert(i*i);
                for(long long int j=i*i;j<=sqrt(r);j+=i)
                {
                    prime[j]=0;
                }
            }
        }
    }
public:
    int nonSpecialCount(int l, int r) {
        unordered_set<long long int>primesquare;
        vector<long long int>prime(1000005,1);
        sieve(prime,primesquare,r);

        int c=0;
        for(auto &it : primesquare)
        {
            if(it>=l && it<=r)
            c++;
        }
        return r-l+1-c;
    }
};