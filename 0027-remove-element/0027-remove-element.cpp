class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = nums.size() - 1;
        int count = nums.size();
        int i = 0;
        while (i <= j) {
            if (nums[i] == val) {
                std::swap(nums[i], nums[j]);
                --count;
                --j;
            } else {
                ++i;
            }
            
        }
        return count;
    }
};