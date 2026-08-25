class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int x = 0; x < nums.size(); x++) {
            if (nums[x] == val) {
                nums.erase(nums.begin() + x);
                x --;
            }
        }
        return nums.size();
    }
};