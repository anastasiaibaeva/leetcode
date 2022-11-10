class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cur_el = nums[0];
        int cur_index = 1;
        int unique = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != cur_el) {
                ++unique;
                cur_el = nums[i];
                nums[cur_index] = cur_el;
                ++cur_index;
            }
        }
        return unique;
    }
};