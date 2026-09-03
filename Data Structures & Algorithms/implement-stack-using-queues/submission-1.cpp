class MyStack {
public:
    MyStack() {
        
    }

    std::vector<int> stk;
    int top_ind = -1;
    
    void push(int x) {
        stk.push_back(x);
        top_ind ++;
    }
    
    int pop() {
        int pass = stk[top_ind];
        stk.erase(stk.begin() + top_ind);
        top_ind --;
        return pass;
    }
    
    int top() {
        return stk[top_ind];
    }
    
    bool empty() {
        if (top_ind == -1) {
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */