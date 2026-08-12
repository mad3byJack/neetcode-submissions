class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        if (strs.size() == 1) return strs[0];
        std::string ans = "";
        int str = 1;
        int letter = 0;
        while (letter < strs[0].length()) {
            char curr = strs[0][letter];
            if (str < strs.size() && letter < strs[str].length() && curr == strs[str][letter]) {
                if (str == strs.size() - 1) {
                    ans.push_back(curr);
                    letter++;
                    str = 1;
                } else {
                    str++;
                }
            } else {
                break;
            }
        }
        return ans;
    }
};