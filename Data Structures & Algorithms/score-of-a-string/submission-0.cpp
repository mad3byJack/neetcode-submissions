class Solution {
public:
    int scoreOfString(string s) {
        char last = s[0];
        int sum = 0;
        for (int i = 1; i < s.size(); i++) {
            sum += abs((int)s[i] - (int)last);
            last = s[i];
        }
        return sum;
    }
};