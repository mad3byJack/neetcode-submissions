class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++) {
            vector<int> curr;
            curr.push_back(1);
            if (i == 0) {
                ans.push_back(curr);
                continue;
            }
            for (int x = 0; x < i - 1; x++) {
                int first = ans[i - 1][x];
                int second = ans[i - 1][x + 1];
                curr.push_back(first + second);
            }
            curr.push_back(1);
            ans.push_back(curr);
        }
        return ans;
    }
};