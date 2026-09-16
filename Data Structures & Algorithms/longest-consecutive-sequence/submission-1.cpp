class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int longest = 0;
        for (int num : num_set) {
            if (num_set.find(num - 1) == num_set.end()) {
                int i = 1;
                while (num_set.find(num + i) != num_set.end()) {
                    i++;
                }
                if (i > longest) {
                    longest = i;
                }
            }
        }
        return longest;
    }
};
