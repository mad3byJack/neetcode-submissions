class Solution {
public:
    int countSeniors(vector<string>& details) {
        int total = 0;
        for (int x = 0; x < details.size(); x++) {
            if (details[x][11] > '6') {
                total ++;
            } 
            else if (details[x][11] == '6' && details[x][12] > '0') {
                total ++;
            } 
        }
        return total;
    }
};