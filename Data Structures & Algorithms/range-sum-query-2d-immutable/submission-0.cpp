class NumMatrix {
public:
    vector<vector<int>> own;

    NumMatrix(vector<vector<int>>& matrix) {
        own = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for (int x = row1; x <= row2; x++) {
            for (int y = col1; y <= col2; y++) {
                sum += own[x][y];
            }
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */