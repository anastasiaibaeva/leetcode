class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        
        std::sort(intervals.begin(), intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        for (size_t i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] > end) {
                res.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
                
            } else {
                end = std::max(end, intervals[i][1]);
            }
        }
        res.push_back({start, end});
        return res;
    }
};