class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (last == nums[i]) {
                nums.erase(nums.begin() + i);
                i --;
            }
            last = nums[i];
        }
        return nums.size();
    }
};