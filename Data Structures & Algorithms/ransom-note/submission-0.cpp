class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> rans;
        unordered_map<char, int> mags;
        for (char &c : ransomNote) rans[c] ++;
        for (char &c : magazine) mags[c] ++;
        for (const auto& [key, c] : rans) if (rans[key] > mags[key]) return false;
        return true;
    }
};