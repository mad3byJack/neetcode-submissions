class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int x = 0; x < arr.size(); x++) {
            if (x == arr.size() - 1) {
                arr[x] = -1;
            } else {
                int highest = arr[x + 1];
                for (int y = x + 1; y < arr.size(); y++) {
                    if (arr[y] > highest) {
                        highest = arr[y];
                    }
                }
                arr[x] = highest;
            }
        }
        return arr;
    }
};