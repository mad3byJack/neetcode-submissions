class Solution {
public:
    int lengthOfLastWord(string s) {
        int total = 0;
        bool new_word = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                new_word = true;
            }
            else {
                if (new_word) {
                    total = 0;
                }
                new_word = false;
            }
            if (!new_word) {
                total++;
            }
        }
        return total;
    }
};