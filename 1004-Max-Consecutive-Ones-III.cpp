class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int n=a.size();

        int l=0,r=0,maxlen=0;
        int cnt=0;
        while(r<n)
        {
            //condition check
            if(a[r]==0)
            cnt++;

            // shrinking the window
            if(cnt>k)
            {
                if(a[l]==0)
                cnt--;

                l++;
            }

            //finding answer
            if(cnt<=k)
            maxlen=max(maxlen,r-l+1);

            //creating the window
            r++;
        }
        return maxlen;
    }
};