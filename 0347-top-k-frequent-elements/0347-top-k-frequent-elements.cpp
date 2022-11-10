class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> bucket(nums.size());
        unordered_map<int, int> m;
        vector<int> res;
        for (auto & el : nums) {
            ++m[el];
        }
        for (auto & el : m) {
            bucket[el.second - 1].push_back(el.first);
        }
        for (int i = bucket.size() - 1; i >= 0 && k > 0; --i) {
            if (!bucket[i].empty()) {
                for (auto & el : bucket[i]) {
                    res.push_back(el);
                    --k;
                }
            }
        } 
        return res;
    }
};