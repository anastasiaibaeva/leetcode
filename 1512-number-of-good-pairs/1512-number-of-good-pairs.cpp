class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        std::unordered_map<int, int> ma;
        int result = 0;
        for (int i = 0; i < nums.size(); ++i) {
            ++ma[nums[i]];
        }
        for (auto & m : ma) {
            if (m.second > 1) {
                result += (m.second * (m.second - 1)) / 2;
            }
        }
        return result;
    }
};