class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        std::vector<int> p_vec(26, 0);
        std::vector<int> s_vec(26, 0);
        std::vector<int> res;
        if (p.size() > s.size()) {
            return {};
        }
        for (int i = 0; i < p.size(); ++i) {
            p_vec[p[i] - 'a'] += 1;
            s_vec[s[i] - 'a'] += 1;
        }
        for (int i = p.size(); i < s.size(); ++i) {
            if (s_vec == p_vec) {
                res.push_back(i - p.size());
            }
            s_vec[s[i] - 'a'] += 1;
            s_vec[s[i - p.size()] - 'a'] -= 1;
        }
        if (s_vec == p_vec) {
                res.push_back(s.size() - p.size());
            }
        return res;
    }
};