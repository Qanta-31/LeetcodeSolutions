class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        map<int,pair<int,int>>m;
        int n1=a.size();
        int n2=b.size();

        for(int i=0;i<n1;i++)
        m[a[i]].first++;

        for(int i=0;i<n2;i++)
        m[b[i]].second++;

        vector<int>res;
        for(auto &it :m)
        {
            int mine=min(it.second.first , it.second.second);
            cout<<it.first<<"("<<it.second.first<<","<<it.second.second<<")"<<endl;
            if(mine!=0)
            {
                while(mine--)
                res.push_back(it.first);
            }
        }
        return res;
    }
};