class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto & s : image) {
            std::reverse(s.begin(), s.end());
            for (auto & n : s) {
                n = !n;
            }
        }
        return image;
    }
};