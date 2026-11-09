class Solution {
public:
    string removeStars(string s) {
        std::string ans;
        int wait = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '*') {
                wait += 2;
            }
            if (wait > 0) {
                wait --;
            }
            else {
                ans.push_back(s[i]);
            }
        }
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};