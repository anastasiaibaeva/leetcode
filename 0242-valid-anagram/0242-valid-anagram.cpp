class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map <char, int> f;
        std::unordered_map <char, int> sec;
        for (auto c : s) {
            ++f[c];
        }
        for (auto c : t) {
            ++sec[c];
        }
        return f == sec;
    }
};