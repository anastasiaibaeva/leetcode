class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> m;
        int maxx = 0;
        int start = 0;
        for (int i = 0; i < s.size(); ++i) {
            ++m[s[i]];
            if (m[s[i]] > 1) {
                while (start < s.size() && m[s[i]] > 1) {
                    --m[s[start]];
                    ++start;
                }
            }
            maxx = std::max(maxx, i - start + 1);
        }
        return maxx;
    }
};