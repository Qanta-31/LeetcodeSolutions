class Solution {
public:
    int numWaterBottles(int nb, int ex) {
        int ans=nb;
        while(nb>=ex)
        {
            ans+=(nb/ex);
            nb=nb/ex + nb%ex;
        }
        return ans;
    }
};