class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() > t.size()) {
            return false;
        }
        int i = 0;
        for (int x = 0; x < t.size(); x++) {
            if (t[x] == s[i]) {
                i++;
            }
        }
        if (i == s.size()) {
            return true;
        }
        return false;
    }
};