class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size() == 1 || nums.size() == 2) {
            return true;
        }
        int dir = 0;
        int last = nums[0];
        for (int i = 1; i < nums.size(); i ++) {
            if (nums[i] > last) {
                if (dir == -1) {
                    return false;
                }
                dir = 1;
            }
            if (nums[i] < last) {
                if (dir == 1) {
                    return false;
                }
                dir = -1;
            }
            last = nums[i];
        }
        return true;
    }
};