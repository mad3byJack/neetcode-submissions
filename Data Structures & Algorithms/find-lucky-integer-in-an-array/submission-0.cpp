class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> table;
        for (int i = 0; i < arr.size(); i++) {
            table[arr[i]] ++;
        }
        int max = -1;
        for (const auto& [num, freq] : table) {
            if (num == freq && num > max) {
                max = num;
            }
        }
        return max;
    }
};