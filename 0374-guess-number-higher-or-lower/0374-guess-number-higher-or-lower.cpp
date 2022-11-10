/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long left = 0;
        long right = n;
        long mid = n / 2;
        while (left <= right) {
            if (guess(mid) == 0) {
                return mid;
            }
            if (guess(mid) == -1) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
            mid = (left + right) / 2;
        }
        return -1;
    }
};