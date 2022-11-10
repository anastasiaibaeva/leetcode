class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> m;
        int res = 0;
        int mostf = 0;
        for (int i = 0; i < s.size(); ++i) {
            ++m[s[i]];
            mostf = max(mostf, m[s[i]]);
            if (res - mostf < k) {
                ++res;
            } else {
                --m[s[i - res]];
            }
        }
        return res;
    }
};