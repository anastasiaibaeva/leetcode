class Solution {
public:
    vector<int> partitionLabels(string s) {
        std::vector<int> letters(26, 0);
        std::vector<int> res;
        for (int i = 0; i < s.size(); ++i) {
            letters[s[i] - 'a'] = i;
        }
        int end = 0;
        int start = 0;
        for (int i = 0; i < s.size(); ++i) {
            end = max(end, letters[s[i] - 'a']);
            if (i == end) {
                res.push_back(end - start + 1);
                start = i + 1;
            }
        }
        return res;
    }
};