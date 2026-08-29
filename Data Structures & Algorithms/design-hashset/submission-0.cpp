class MyHashSet {
public:
    
    MyHashSet() {
        
    }

    std::vector<int> values;
    int size = 0;
    
    void add(int key) {
        for (int i = 0; i < size; i++) {
            if (values[i] == key){
                return;
            }
        }
        values.push_back(key);
        size ++;
    }
    
    void remove(int key) {
        for (int i = 0; i < size; i++) {
            if (values[i] == key) {
                values.erase(values.begin() + i);
                size --;
            }
        }
    }
    
    bool contains(int key) {
        for (int i = 0; i < size; i++) {
            if (values[i] == key) {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */