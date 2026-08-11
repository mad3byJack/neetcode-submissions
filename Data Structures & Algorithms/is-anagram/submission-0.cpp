class Solution {
public:
    bool isAnagram(string s, string t) {
        int letters_one[26] = {0};
        int letters_two[26] = {0};
        if (s.size() != t.size()) {
            return false;
        }
        for (int x = 0; x < s.size(); x ++) {
            letters_one[(int)s[x] - 97] ++;
            letters_two[(int)t[x] - 97] ++;
        }
        for (int x = 0; x < 26; x++) {
            if (letters_one[x] != letters_two[x]) {
                return false;
            }
        }
        return true;
    }
};
