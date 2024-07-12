class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int res=0;
        string top,bot;
        int tscore,bscore;

        if(x>y)
        {
            top="ab";
            tscore=x;
            bot="ba";
            bscore=y;
        }
        else
        {
            top="ba";
            tscore=y;
            bot="ab";
            bscore=x;
        }

        vector<char>s1,s2;
        for(auto &ch : s)
        {
            if(ch==top[1] && !s1.empty() && s1.back()==top[0])
            {
                res+=tscore;
                s1.pop_back();
            }
            else
            s1.push_back(ch);
        }

        for(auto &ch : s1)
        {
            if(ch==bot[1] && !s2.empty() && s2.back()==bot[0])
            {
                res+=bscore;
                s2.pop_back();
            }
            else
            s2.push_back(ch);
        }

        return res;

    }
};