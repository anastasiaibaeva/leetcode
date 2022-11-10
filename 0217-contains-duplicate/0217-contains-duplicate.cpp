class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> m(nums.begin(), nums.end());
        return (m.size() == nums.size()) ? false : true;
    }
};