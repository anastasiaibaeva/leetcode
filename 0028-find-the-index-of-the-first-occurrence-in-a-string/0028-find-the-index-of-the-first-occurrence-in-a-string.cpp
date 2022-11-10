class Solution {
public:
    int strStr(string haystack, string needle) {
        int res = -1;
        int n_ind = 0;
        int i = 0;
        int start = 0;
        while (i < haystack.size()) {
            if (haystack[i] == needle[n_ind]) {
                
                if (n_ind == needle.size() - 1) {
                    return i - needle.size() + 1;
                }
                ++n_ind;
                ++i;
            } else {
                n_ind = 0;
                ++start;
                i = start;
            }
        }
        return res;
    }
};