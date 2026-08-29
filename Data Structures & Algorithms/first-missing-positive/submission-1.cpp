class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int num = 1;
        bool done = false;
        while (!done) {
            bool found = false;
            for (int i = 0; i < nums.size(); i++) {
                if (num == nums[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                done = true;
            }
            else {
                num ++;
            }
        }
        return num;
    }
};