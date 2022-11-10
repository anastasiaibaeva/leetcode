class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        std::unordered_map <char, char> m = {{')', '('}, {']', '['}, {'}', '{'}};
        for (auto c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else if (st.empty() || st.top() != m[c]) {
                return false;
            } else {
                st.pop();
            }
            
        }
        return st.empty();
    }
};