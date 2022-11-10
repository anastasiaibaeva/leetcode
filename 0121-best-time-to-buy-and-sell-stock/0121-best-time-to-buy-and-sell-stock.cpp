class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int min = INT_MAX;
        for (auto & i : prices) {
            min = std::min(i, min);
            if (i - min > res) {
                res = i - min;
            }
        }
        return res;
    }
};