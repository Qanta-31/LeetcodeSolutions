class Solution {
public:
    int minIncrementForUnique(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();

        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]==a[i])
            {
                a[i+1]++;
                c++;
            }

            else if(a[i+1]<a[i])
            {
                int add=(a[i]-a[i+1]+1);
                a[i+1]+=add;
                c+=add;
            }
        }

        return c;
    }
};