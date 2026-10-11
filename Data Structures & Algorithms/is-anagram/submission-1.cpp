class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> y;
        unordered_map<char, int> x;
        for (char c : s) {
            y[c]++;
        }
        for (char c : t) {
            x[c]++;
        }
        if (x == y) return true;
        return false;
    }
};