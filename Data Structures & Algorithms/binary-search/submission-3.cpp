class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return -1;
        if (n == 1 && target == nums[0]) return 0;
        int left = 0;
        int right = n - 1;
        int mid = right / 2;
        if (nums[left] == target) {
            return left;
        }
        if (nums[right] == target) {
            return right;
        }
        while (left != mid && right != mid) {
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] > target) {
                right = mid;
            }
            else if (nums[mid] < target) {
                left = mid;
            }
            mid = (right + left) / 2;
        }
        return -1;
    }
};
