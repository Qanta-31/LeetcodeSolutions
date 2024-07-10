class Solution {
public:
    int minOperations(vector<string>& a) {
        // d1 - d2  -  d1 - d21  -  d21  --d1  --mainfolder

        int n=a.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=="../" && c>0)
            c--;
            else if(a[i]!="../" && a[i]!="./")
            c++;
        }
        return c;
    }
};