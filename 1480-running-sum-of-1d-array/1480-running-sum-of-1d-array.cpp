class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int sum = 0;
        for (auto & i : nums) {            
            res.push_back(sum += i);
        }
        return res;
    }
};