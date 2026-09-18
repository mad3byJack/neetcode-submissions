class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stk;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                int temp = 0;
                temp += stk.top();
                stk.pop();
                temp += stk.top();
                stk.pop();
                stk.push(temp);
            } else if (tokens[i] == "-") {
                int temp = stk.top();
                stk.pop();
                temp = stk.top() - temp;
                stk.pop();
                stk.push(temp);
            } else if (tokens[i] == "*") {
                int temp = stk.top();
                stk.pop();
                temp *= stk.top();
                stk.pop();
                stk.push(temp);
            } else if (tokens[i] == "/") {
                int temp = stk.top();
                stk.pop();
                temp = stk.top() / temp;
                stk.pop();
                stk.push(temp);
            } else {
                stk.push(stoi(tokens[i]));
            }
        }
        return stk.top();
    }
};
