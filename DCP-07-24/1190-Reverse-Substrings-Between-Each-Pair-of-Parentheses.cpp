class Solution {
public:
    string reverseParentheses(string a) {
        int n=a.size();
        stack<pair<char,int>>s;
        string ans="";

        for(int i=0;i<n;i++)
        {
            if(a[i]!='(' && a[i]!=')')
            ans+=a[i]; 
            else 
            ans+='1';

            if(a[i]=='(')
            {
                int startidx=i;
                s.push({a[i], startidx});
            }

            else if(a[i]==')')
            {
                int startrev=s.top().second;
                reverse(ans.begin()+startrev,ans.begin()+i);
                s.pop();
            }
        }

        string res="";
        for(int i=0;i<n;i++)
        {
            if(ans[i]!='1')
            res+=ans[i];
        }



        return res;
    }
};