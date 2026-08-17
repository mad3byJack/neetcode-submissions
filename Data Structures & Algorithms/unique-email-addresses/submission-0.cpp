class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        std::vector<string> found;
        for (int i = 0; i < emails.size(); i ++) {
            bool is_in = false;
            bool past_local = false;
            bool past_plus = false;
            int j = 0;
            while (emails[i][j] != '\0') {
                if (past_local) {
                    continue;
                }
                if (emails[i][j] == '.' && !past_plus) {
                    emails[i].erase(j, 1);
                    j --;
                }
                if (emails[i][j] == '@') {
                    past_local = true;
                    past_plus = false;
                    break;
                }
                if (emails[i][j] == '+') {
                    past_plus = true;
                }
                if (past_plus) {
                    emails[i].erase(j, 1);
                    j --;
                }
                j ++;
            }
            for (int x = 0; x < found.size(); x ++) {
                if (found[x] == emails[i]) {
                    is_in = true;
                }
            }
            if (!is_in) {
                found.push_back(emails[i]);
            }
        }
        return found.size();
    }
};