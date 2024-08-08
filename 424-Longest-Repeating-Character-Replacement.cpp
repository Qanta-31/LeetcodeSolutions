class Solution {
public:
int characterReplacement(string s, int k) {
    int n = s.size();
    int l = 0, r = 0;
    int maxlen = 0;
    int hash[26] = {0};
    int maxf = 0;

    while (r < n) {
        hash[s[r] - 'A']++;
        maxf = max(maxf, hash[s[r] - 'A']);

        // Check if we need to shrink the window
        if ((r - l + 1) - maxf > k) {
            hash[s[l] - 'A']--;
            l++;
        }

        // Update maxlen after adjusting the window
        if((r - l + 1) - maxf <= k)
        maxlen = max(maxlen, r - l + 1);
        
        r++;
    }

    return maxlen;
}

};