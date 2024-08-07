class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        map<char,int>m;

        int l=0;
        int r=0;

        int maxlen=0;

        if(n==0)
        return maxlen;

        while(r<n)
        {
            if(m.find(s[r]) != m.end())
            {
                if(m[s[r]] >= l)
                l=m[s[r]]+1;
            }

            m[s[r]]=r;
            r++;

            maxlen=max(maxlen,r-l+1);
        }
        return maxlen-1;
    }
};