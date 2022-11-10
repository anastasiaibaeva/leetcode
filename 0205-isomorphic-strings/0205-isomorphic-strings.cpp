class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        std::vector<int> s_vec(256, -1);
        std::vector<int> t_vec(256, -1);
        for (int i = 0; i < s.size(); ++i) {
            if (s_vec[t[i] ] == -1 && t_vec[s[i] ] == -1) {
                s_vec[t[i] ] = s[i] ;
                t_vec[s[i] ] = t[i] ;
            } else if (s_vec[t[i] ] != s[i]  || t_vec[s[i] ] != t[i] ) {
                return false;
            }
        }
        return true;
    }
};