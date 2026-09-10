class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int half = nums.size() / 2;
        unordered_map<int, int> table;
        for (int i : nums) {
            table[i] ++;
        }
        for (const auto& [num, freq] : table) {
            if (freq > half) {
                return num;
            }
        }
        return 0;
    }
};