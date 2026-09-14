class Solution {
public:

    vector<int> getRow(int rowIndex) {
        vector<vector<int>> all_rows;
        for (int i = 0; i <= 33; i++) {
            vector<int> curr_row;
            curr_row.push_back(1);
            if (i == 0) {
                all_rows.push_back(curr_row);
                continue;
            }
            if (i == 1) {
                curr_row.push_back(1);
                all_rows.push_back(curr_row);
                continue;
            }
            for (int x = 1; x < i; x++) {
                curr_row.push_back(all_rows[i - 1][x - 1] + all_rows[i - 1][x]);
            }
            curr_row.push_back(1);
            all_rows.push_back(curr_row);
        }
        return all_rows[rowIndex];
    }
};