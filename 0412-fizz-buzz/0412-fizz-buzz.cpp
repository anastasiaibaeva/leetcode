class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<std::string> res;
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0) {
                if (i % 5 == 0) {
                    res.push_back("FizzBuzz");
                } else {
                    res.push_back("Fizz");
                } 
            } else if (i % 5 == 0) {
                res.push_back("Buzz");
            } else {
                res.push_back(std::to_string(i));
            }
        }
        return res;
    }
};