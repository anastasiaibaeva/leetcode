class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                if (s[i - 1] != ' ') {
                    int end = i - 1;
                    while (start < end) {
                        std::swap(s[start], s[end]);
                        ++start;
                        --end;
                    }
                }
                start = i + 1;
            }
        }
        int end = s.size() - 1;
        while (start < end) {
            std::swap(s[start], s[end]);
            ++start;
            --end;
        }
        return s;
    }
};