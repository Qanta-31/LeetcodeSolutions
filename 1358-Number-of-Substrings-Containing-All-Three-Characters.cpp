class Solution {
public:
    int numberOfSubstrings(string a) {
         int n=a.size();

         int check[3]={-1,-1,-1};
         int cnt=0;

         for(int i=0;i<n;i++)
         {
            check[a[i]-'a']=i;
            int mine=*min_element(check,check+3);
            
            cnt+= (1 + mine);
         }
         return cnt;
    }
};