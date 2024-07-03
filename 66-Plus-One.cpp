class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int sum=0;
        int carry=0;
        int n=a.size();

        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==9)
            {
                if(carry==1 || i==n-1)
                {
                    carry=1;
                    a[i]=0;
                }
            }
            else if(a[i]!=9)
            {
                if(carry==1 || i==n-1)
                {
                    a[i]++;
                    carry=0;
                }
            }
        }
        if(carry==1)
        {
            reverse(a.begin(),a.end());
            a.push_back(1);
            reverse(a.begin(),a.end());
        }
        return a;
    }
};