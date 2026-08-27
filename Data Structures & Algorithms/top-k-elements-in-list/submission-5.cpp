struct item {
    int val;
    int freq;
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<int> ans;
        std::vector<struct item> items;
        std::unordered_map<int, int> counts;
        for (int i = 0; i < nums.size(); i++) {
            counts[nums[i]]++;
        }
        for (auto const& [val, freq] : counts) {
            struct item curr;
            curr.val = val;
            curr.freq = freq;
            items.push_back(curr);
        }
        for (int x = 0; x < k; x++) {
            struct item highest;
            highest.freq = -1;
            int index = -1;
            for (int i = 0; i < items.size(); i++) {
                if (items[i].freq > highest.freq) {
                    highest = items[i];
                    index = i;
                }
            }
            ans.push_back(highest.val);
            items.erase(items.begin() + index);
        }
        return ans;
    }
};