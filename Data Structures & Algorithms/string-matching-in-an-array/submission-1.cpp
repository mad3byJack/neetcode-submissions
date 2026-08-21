class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        std::vector<string> result;
        for (int x = 0; x < words.size(); x++) {
            for (int i = 0; i < words.size(); i++) {
                if (i == x) {
                    continue;
                }
                if (words[x].size() < words[i].size()) {
                    continue;
                }
                if (words[x].contains(words[i])) {
                    bool found = false;
                    for (int y = 0; y < result.size(); y++) {
                        if (words[i] == result[y]) {
                            found = true;
                        }
                    }
                    if (!found) {
                        result.push_back(words[i]);
                    }
                }
            }
        }
        return result;
    }
};