class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sum_list;
        int sum = 0;
        sum_list.push_back(sum);
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            sum_list.push_back(sum);
        }
        for (int i = 0; i < sum_list.size() - 1; i++) {
            if (sum_list[i] == sum_list[sum_list.size() - 1] - sum_list[i + 1]) {
                return i;
            }
        }
        return -1;
    }
};