class Solution {
public:
    char findTheDifference(string s, string t) {
    int first = 0;
    int second = t[t.size() - 1];
    for (size_t i = 0; i < s.size(); ++i) {
        first += s[i];
        second += t[i];
    }
    return (char) (second - first);
}
};