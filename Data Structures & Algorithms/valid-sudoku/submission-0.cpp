class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int x = 0; x < 9; x ++) {
            std::vector<int> nums;
            for (int y = 0; y < 9; y++) {
                if (board[x][y] != '.') {
                    int num = (board[x][y]);
                    bool contains = std::find(std::begin(nums), std::end(nums), num) != std::end(nums);
                    if (contains) {                       
                        return false;
                    }
                    nums.push_back(num);
                }
            }
        }
        for (int x = 0; x < 9; x ++) {
            std::vector<int> nums;
            for (int y = 0; y < 9; y++) {
                if (board[y][x] != '.') {
                    int num = (board[y][x]);
                    bool contains = std::find(std::begin(nums), std::end(nums), num) != std::end(nums);
                    if (contains) {
                        return false;
                    }
                    nums.push_back(num);
                }
            }
        }
        for (int gridx = 0; gridx < 3; gridx++) {
            for (int gridy = 0; gridy < 3; gridy++) {
                std::vector<int> nums;
                for (int x = gridx * 3; x < (gridx * 3) + 3; x++) {
                    for (int y = gridy * 3; y < (gridy * 3) + 3; y++) {
                        if (board[x][y] != '.') {
                            int num = (board[x][y]);
                            bool contains = std::find(std::begin(nums), std::end(nums), num) != std::end(nums);
                            if (contains) {   
                                std::cout << "hello";
                                return false;
                            }
                            nums.push_back(num);
                        }
                    }
                }
            }
        }
        return true;
    }
};
