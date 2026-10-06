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
        int lo = 1;
        int hi = n;
        int curr = lo + (hi - lo) / 2;
        int g = guess(curr);
        while (g != 0) {
            if (g == -1) {
                hi = curr - 1;
            } else {
                lo = curr + 1;
            }
            curr = lo + (hi - lo) / 2;
            g = guess(curr);
        }
        return curr;
    }
};