class Solution {
public:
    int longestPalindrome(string s) {
        int oddCount = 0;
        unordered_map<char, int> ump;
        for (char &c : s) { 
            ump[c] ++;
            if (ump[c] % 2 == 1) oddCount ++;
            else oddCount --;
        }
        if (oddCount > 1) return s.size() - oddCount + 1;
        return s.size();
    }
};