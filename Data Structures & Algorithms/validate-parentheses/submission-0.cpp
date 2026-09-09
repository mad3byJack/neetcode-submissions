class Solution {
public:
    bool isValid(string s) {
        std::stack<int> bracks;
        for (char c : s) {
            switch (c) {
                case '(':
                    bracks.push(c);
                    break;
                case '{':
                    bracks.push(c);
                    break;
                case '[':
                    bracks.push(c);
                    break;
                case ')':
                    if (bracks.empty()) {
                        return false;
                    }
                    if (bracks.top() != '(') {
                        return false;
                    }
                    bracks.pop();
                    break;
                case '}':
                    if (bracks.empty()) {
                        return false;
                    }
                    if (bracks.top() != '{') {
                        return false;
                    }
                    bracks.pop();
                    break;
                case ']':
                    if (bracks.empty()) {
                        return false;
                    }
                    if (bracks.top() != '[') {
                        return false;
                    }
                    bracks.pop();
                    break;
            }
        }
        if (!bracks.empty()) {
            return false;
        }
        return true;
    }
};