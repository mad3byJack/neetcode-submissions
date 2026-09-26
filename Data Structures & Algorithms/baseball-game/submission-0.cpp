class Solution {
public:
    int calPoints(vector<string>& operations) {
        int result = 0;
        stack<int> stk;
        int n = operations.size();
        for (int i = 0; i < n; i++) {
            if (operations[i] == "+") {
                int temp1 = stk.top();
                stk.pop();
                int temp2 = stk.top();
                stk.push(temp1);
                stk.push(temp1 + temp2);
                result += (temp1 + temp2);
            }
            else if (operations[i] == "C") {
                result -= stk.top();
                stk.pop();
            }
            else if (operations[i] == "D") {
                result += (stk.top() * 2);
                stk.push(stk.top() * 2);
            }
            else {
                int num = stoi(operations[i]);
                result += num;
                stk.push(num);
            }
        }
        return result;
    }
};