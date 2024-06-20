class Solution {
public:
    int maxDistance(vector<int>& p, int m) {
        sort(p.begin(),p.end());
        int l=1;
        int h=(p.back()-p[0])/(m-1);
        int ans=1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(canwe(p,mid,m))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return ans;
    }

    private:
    bool canwe(vector<int>&a, int dis,int balls)
    {
        int c=1;
        int last=a[0];
        for(int i=1;i<a.size();i++)
        {
            if(a[i]-last>=dis)
            {
                c++;
                last=a[i];
            }
            if(c>=balls)
            return true;
        }
        return false;
    }
};