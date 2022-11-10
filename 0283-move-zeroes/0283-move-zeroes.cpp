class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ind = 0;
        int j = nums.size() - 1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                std::swap(nums[ind], nums[i]);
                ind += 1;
            } 
        }
    }
};