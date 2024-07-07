class Solution {
public:
    string compressedString(string a) {
        int c=1;
        int n=a.size();
        string ans="";

        for(int i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            c++;
            else if(a[i]!=a[i+1])
            {
                if(c!=0)
                ans+=to_string(c) + a[i];
                c=1;
            }

            if(c==9)
            {
                if(c!=0)
                ans+=to_string(c) + a[i];
                c=0;
            }
        }

        return ans;
    }
};