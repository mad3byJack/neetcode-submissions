class Solution {
public:
    bool isPalindrome(string s) {
        for (int x = 0; x < s.size(); x++) {
            s[x] = std::tolower(s[x]);
            if (s[x] <= 'z' && s[x] >= 'a') {
                continue;
            }
            if (s[x] <= '9' && s[x] >= '0') {
                continue;
            }
            s.erase(s.begin() + x);
            x --;
        }
        int i = 0;
        char left = s[i];
        char right = s[(s.size()) - i - 1];
        while (left == right) {
            if (i >= ((s.size() / 2))) {
                return true;
            }
            i ++;
            left = s[i];
            right = s[(s.size()) - i - 1];
        }
        return false;
    }
};
