class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        std::vector<int> missing;
        for (int x = 1; x <= nums.size(); x++) {
            bool exists = std::find(std::begin(nums), std::end(nums), x) != std::end(nums);
            if (!exists) {
                missing.push_back(x);
            }
        }
        return missing;
    }
};