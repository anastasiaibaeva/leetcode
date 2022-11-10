class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
        }
        int must_be = (nums.size() + 1) * (0 + nums.size()) / 2;
        return must_be - sum;
    }
};