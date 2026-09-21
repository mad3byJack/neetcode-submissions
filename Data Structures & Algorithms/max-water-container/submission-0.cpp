class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n - 1;
        int max_water = 0;
        while (right > left) {
            int water = std::min(heights[left], heights[right]) * (right - left);
            if (water > max_water) {
                max_water = water;
            }
            if (heights[left] > heights[right]) {
                right --;
            } else {
                left ++;
            }
        }
        return max_water;
    }
};
