class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int sum = 0;
        while (i != j) {
            int temp = (j - i) * std::min(height[i], height[j]);
            if (temp > sum) {
                sum = temp; 
            }
            if (height[i] < height[j]) {
                ++i;
            } else {
                --j;
            }
        }
        return sum;
    }
};