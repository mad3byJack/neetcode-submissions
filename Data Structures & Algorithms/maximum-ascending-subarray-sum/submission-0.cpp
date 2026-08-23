class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int highest_sum = 0;
        int current_sum = 0;
        int last_num = 0;
        for (int x = 0; x < nums.size(); x ++) {
            if (nums[x] > last_num) {
                current_sum += nums[x];
                if (current_sum > highest_sum) {
                    highest_sum = current_sum;
                }
            }
            else {
                current_sum = 0;
                current_sum += nums[x];
            }
            last_num = nums[x];
        }
        return highest_sum;
    }
};