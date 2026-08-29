class MyHashMap {
public:
    MyHashMap() {
        
    }

    std::vector<std::vector<int>> mapping;
    
    void put(int key, int value) {
        for (int i = 0; i < mapping.size(); i++) {
            if (mapping[i][0] == key) {
                mapping[i][1] = value;
                return;
            }
        }
        std::vector<int> temp;
        temp.push_back(key);
        temp.push_back(value);
        mapping.push_back(temp);
    }
    
    int get(int key) {
        for (int i = 0; i < mapping.size(); i++) {
            if (mapping[i][0] == key) {
                return mapping[i][1];
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for (int i = 0; i < mapping.size(); i++) {
            if (mapping[i][0] == key) {
                mapping.erase(mapping.begin() + i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */