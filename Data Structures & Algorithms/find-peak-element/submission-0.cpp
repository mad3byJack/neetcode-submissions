class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int m = (l + r) / 2;
        while (l <= r) {
            if (m > l && nums[m] < nums[m - 1]) m -= 1;
            else if (m < r && nums[m] < nums[m + 1]) m += 1;
            else return m;
        }
        return 0;
    }
};