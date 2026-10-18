class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                nums[i - 1] *= 2;
                nums[i] = 0;
            }
        }
        nums = pushZerosToEnd(nums, n);
        return nums;
    }

    vector<int> pushZerosToEnd(vector<int> arr, int n) {
        int count = 0; 
        for (int i = 0; i < n; i++) if (arr[i] != 0) arr[count++] = arr[i];
        while (count < n) arr[count++] = 0;
        return arr;
    }

};
