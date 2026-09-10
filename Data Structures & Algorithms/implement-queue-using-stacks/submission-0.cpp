class MyQueue {
public:
    MyQueue() {
        
    }

    vector<int> q;
    
    void push(int x) {
        q.push_back(x);
    }
    
    int pop() {
        int popped = q[0];
        q.erase(q.begin());
        return popped;
    }
    
    int peek() {
        return q[0];
    }
    
    bool empty() {
        if (q.size() == 0) {
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */