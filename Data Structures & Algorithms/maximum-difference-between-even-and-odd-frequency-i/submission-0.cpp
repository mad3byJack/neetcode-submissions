class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freqs;
        for (char c : s) {
            freqs[c] ++;
        }
        int max_odd_freq;
        int min_even_freq;
        int max_diff = 0;
        for (const auto& [element, freq] : freqs) {
            if (freq % 2 == 0 && freq < min_even_freq) {
                min_even_freq = freq;
            }
            if (freq % 2 == 1 && freq > max_odd_freq) {
                max_odd_freq = freq;
            }
        }
        max_diff = max_odd_freq - min_even_freq;
        return max_diff;
    }
};