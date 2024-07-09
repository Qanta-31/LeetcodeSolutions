
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }

        vector<pair<int, char>> freqVec;
        for (auto& it : freqMap) {
            freqVec.push_back({it.second, it.first});
        }

        sort(freqVec.begin(), freqVec.end(), greater<pair<int, char>>());

        string ans = "";
        for (auto& it : freqVec) {
            ans += string(it.first, it.second);
        }

        return ans;
    }
};