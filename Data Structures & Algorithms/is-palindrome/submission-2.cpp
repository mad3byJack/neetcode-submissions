class Solution {
public:
    bool isPalindrome(string s) {
        std::vector<char> half;
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
        if (s.size() % 2 == 0) {
            for (int i = 0; i < (s.size() / 2); i++) {
                half.push_back(s[i]);
            }
        }
        else {
            for (int i = 0; i <= (s.size() / 2); i++) {
                half.push_back(s[i]);
            }
        }
        std::reverse(half.begin(), half.end());
        for (int i = (s.size() / 2); i < s.size(); i++) {
            cout << s[i];
            if (s[i] != half[i - (s.size() / 2)]) {
                return false;
            }
        }
        return true;
    }
};
