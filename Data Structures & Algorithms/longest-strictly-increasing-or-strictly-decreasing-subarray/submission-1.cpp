class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int max = 1;
        int curr = 1;
        int last = nums[0];
        for (int i = 1; i < n; i++) {
            if (last < nums[i]) {
                curr ++;
            }
            else {
                curr = 1;
            }
            if (curr > max) {
                max = curr;
            }
            last = nums[i];
        }
        curr = 1;
        last = nums[0];
        for (int i = 1; i < n; i++) {
            if (last > nums[i]) {
                curr ++;
            }
            else {
                curr = 1;
            }
            if (curr > max) {
                max = curr;
            }
            last = nums[i];
        }
        return max;
    }
};