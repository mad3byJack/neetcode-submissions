class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int x = 0; x < nums.size(); x ++) {
            for (int y = 0; y < nums.size(); y ++) {
                if (x == y) {
                    continue;
                }
                if (nums[x] == nums[y]) {
                    return true;
                }
            }
        }
        return false;
    }
};