class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> elements;
        std::vector<int> ans;
        int min = nums.size() / 3;
        for (int i = 0; i < nums.size(); i++) {
            elements[nums[i]] ++;
        }
        for (const auto& [key, value] : elements) {
            if (value > min) {
                ans.push_back(key);
            }
        }
        return ans;
    }
};