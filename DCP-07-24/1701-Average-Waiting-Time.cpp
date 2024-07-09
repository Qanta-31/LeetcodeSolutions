class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& a) {
        int n=a.size();

        long long int start=a[0][0]; // 1
        long long int timetaken=a[0][1]; // 2
        long long int end=start+timetaken; // 3
        long long int wait=end-start; // 2

        // cout<<wait<<" "<<end<<endl;;

        for(int i=1;i<n;i++)
        {
            start=a[i][0];
            timetaken=a[i][1];
            if(end>a[i][0])
            {
                wait+=(end-a[i][0]) + timetaken ; 
                end=(end-a[i][0]) + start + timetaken;
            }
            else if(end<=a[i][0])
            {
                wait+= timetaken ;
                end=start + timetaken;
            }
            // cout<<wait<<" "<<end<<endl;;
            // cout<<end<<" ";
        }
        return wait/(n*1.0);
    }
};