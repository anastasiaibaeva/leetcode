class Solution {
public:
    void rec (std::string cur, int count, int left, int right, std::vector<string>& ans) {
        
        if (left + right == count * 2) {
            ans.push_back(cur);
        } else {
            if (left < count) {
                rec(cur + '(', count, left + 1, right, ans);
            }
            if (right < left) {
                rec(cur + ')', count, left, right + 1, ans);
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        rec("", n, 0, 0, res);
        return res;
    }
    
};