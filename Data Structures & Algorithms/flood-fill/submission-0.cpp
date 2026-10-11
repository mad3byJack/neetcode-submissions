class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int temp = image[sr][sc];
        if (temp == color) return image;
        int width = image[0].size();
        int height = image.size();
        image[sr][sc] = color;
        if (sr + 1 < height && image[sr + 1][sc] == temp) floodFill(image, sr + 1, sc, color);
        if (sr - 1 >= 0 && image[sr - 1][sc] == temp) floodFill(image, sr - 1, sc, color);
        if (sc + 1 < width && image[sr][sc + 1] == temp) floodFill(image, sr, sc + 1, color);
        if (sc - 1 >= 0 && image[sr][sc - 1] == temp) floodFill(image, sr, sc - 1, color);
        return image;
    }
};