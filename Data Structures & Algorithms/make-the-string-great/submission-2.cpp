class Solution {
public:
    string makeGood(string s) {
        bool run = true;
        while (run) {
            char last = s[0];
            run = false;
            for (int i = 1; i < s.size(); i++) {
                if ((int)last == (int)s[i] + 32 || (int)last == (int)s[i] - 32) {
                    s.erase(i - 1, 2);
                    run = true;
                }
                last = s[i];
            }
        }
        return s;
    }
};
