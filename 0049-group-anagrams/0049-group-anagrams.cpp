class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        std::unordered_map <string, std::vector<string>> m;
        for (auto & s : strs) {
            string temp = s;
            std::sort(temp.begin(), temp.end());
            m[temp].push_back(s);
        }
        for (auto & ms : m) {
            answer.push_back(ms.second);
        }
        return answer;
    }
};