class Solution {
public:
    int minOperations(vector<string>& logs) {
        int res = 0;
        int n = logs.size();
        for (auto l : logs) {
            if (l == "../") {
                if (res > 0) {
                    res --;
                }
            }
            else if (l != "./") {
                res ++;
            }
        }
        return res;
    }
};