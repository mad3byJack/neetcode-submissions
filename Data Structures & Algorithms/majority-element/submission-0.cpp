class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::vector<int> prev;
        for (int i = 0; i < nums.size(); i++) {
            bool found = false;
            for (int x = 0; x < prev.size(); x += 2) {
                if (prev[x] == nums[i]) {
                    found = true;
                    prev[x + 1] ++;
                }
            }
            if (!found) {
                prev.push_back(nums[i]);
                prev.push_back(1);
            }
        }
        int highest = 0;
        int ind = 0;
        for (int x = 1; x < prev.size(); x += 2) {
            if (prev[x] > highest) {
                highest = prev[x];
                ind = prev[x - 1];
            }
        }
        return ind;
    }
};