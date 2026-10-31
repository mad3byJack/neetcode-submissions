class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        fast = nums[nums[fast]];
        slow = nums[slow];
        while (slow != fast) {
            fast = nums[nums[fast]];
            slow = nums[slow];
        }
        int sec = nums[0];
        while (sec != slow) {
            slow = nums[slow];
            sec = nums[sec];
        }
        return sec;
    }
};
