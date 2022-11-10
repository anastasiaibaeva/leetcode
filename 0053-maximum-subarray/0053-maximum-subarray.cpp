class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMax = 0;
        int maximum = INT_MIN;
        for (auto & el : nums) {
            curMax = max(el, curMax + el);
            maximum = max(maximum, curMax);
        }
        return maximum;
    }
};