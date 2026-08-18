class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int valid_spots = 0;
        int last = 0;
        if (flowerbed.size() == 1) {
            if (flowerbed[0] == 1) {
                if (n == 0) {
                    return true;
                }
                return false;
            }
            else {
                return true;
            }
        }
        for (int i = 0; i < flowerbed.size(); i++) {
            if ((i + 1) == flowerbed.size()) {
                if (last == 0 && flowerbed[i] == 0) {
                    valid_spots ++;
                }
            }
            else if (last == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                valid_spots ++;
                last = 1;
            } 
            else {
                last = flowerbed[i];
            }
        }
        if (valid_spots >= n) {
            return true;
        }
        return false;
    }
};