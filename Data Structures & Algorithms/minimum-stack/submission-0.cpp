class MinStack {
public:
    MinStack() {
        
    }

    vector<int> stk;
    int size = 0;
    
    void push(int val) {
        stk.push_back(val);
        size++;
    }
    
    void pop() {
        stk.pop_back();
        size --;
    }
    
    int top() {
        return stk[size - 1];
    }
    
    int getMin() {
        int min = stk[0];
        for (int i = 1; i < size; i++) {
            if (stk[i] < min) {
                min = stk[i];
            }
        }
        return min;
    }
};
