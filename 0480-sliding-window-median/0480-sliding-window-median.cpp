class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
    std::vector<double> res;
    multiset<int> m(nums.begin(), nums.begin() + k);
    auto mid = next(m.begin(), k / 2);
    for (size_t i = k; ; ++i) {
        double temp;
        temp = (k % 2 != 0) ? *mid : (((double)(*mid) + *prev(mid, 1)) / 2);
        res.push_back(temp);
        if (nums.size() == i) {
            break;
        }
        m.insert(nums[i]);
        if (nums[i] < *mid) {
            --mid;
        }
        if (nums[i - k] <= *mid) {
            ++mid;
        }
        m.erase(m.lower_bound(nums[i - k]));
    }
    return res;
}
};