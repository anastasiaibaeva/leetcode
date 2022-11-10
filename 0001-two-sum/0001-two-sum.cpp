class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> m;
        std::vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.find(target - nums[i]) != m.end()) {
                res.push_back(i);
                res.push_back(m[target - nums[i]]);
                return res;
            } else {
                m[nums[i]] = i;
            }
        }
        return res;
    }
};