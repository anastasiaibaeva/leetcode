class Solution {
public:
    int fib(int n) {
    int prev1 = 0;
    int prev2 = 0;
    for (int i = 0; i <= n; ++i) {
        if (i == 0) {
            prev2 = 0;
        } else if (i == 1) {
            prev2 = 1;
        } else {
            int temp = prev2 + prev1;
            prev1 = prev2;
            prev2 = temp;
            
        }
    }
    return prev2;
}
};