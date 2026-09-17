class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        int sum;
        while ((sum = numbers[left] + numbers[right]) != target) {
            if (sum > target) {
                right --;
            }
            else {
                left ++;
            }
        }
        vector<int> res;
        res.push_back(left + 1);
        res.push_back(right + 1);
        return res;
    }
};
