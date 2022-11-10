class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int left = 1;
        int right = 1;
        for (int i = 0; i < nums.size(); ++i) {
            left = (left ? left : 1) * nums[i];
            right =(right ? right : 1) * nums[nums.size() - i - 1];
            res = max(res, max(left, right));
        }
        return res;
    }
};