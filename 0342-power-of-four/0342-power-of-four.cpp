class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }
        int num = (int)std::sqrt(n);
        
        if (std::sqrt(n) > num) {
            return false;
        }
        return ((num & (num - 1)) == 0);
    }
};