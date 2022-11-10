class Solution {
public:
    int getNext(int n) {
        int next = 0;
        while (n > 0) {
            next += (n % 10) * (n % 10);
            n /= 10;
        }
        return next;
    }
    
    bool isHappy(int n) {
        std::set<int> been;
        while (n != 1 && (been.find(n) == been.end())) {
            been.insert(n);
            n = getNext(n);
        }
        return (n == 1);
    }
};