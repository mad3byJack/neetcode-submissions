class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> output;
        output.reserve(nums.size());

        int total = 1;
        int num_zeros = 0;

        for (int i = 0; i < nums.size(); i ++) {
            output.push_back(0);
            if (nums[i] == 0) {
                num_zeros ++;
            }
            else {
                total *= nums[i];
            }
        }

        if (num_zeros > 1) {
            return output;
        }

        if (num_zeros == 1) {
            for (int x = 0; x < nums.size(); x ++) {
                if (nums[x] == 0) {
                    output[x] = total;
                    return output;
                }
            }
        }

        for (int j = 0; j < nums.size(); j ++) {
            output[j] = total / nums[j];
        }

        return output;
    }
};
