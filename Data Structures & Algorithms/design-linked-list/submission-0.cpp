class MyLinkedList {
public:

    struct ListNode {
        int val;
        struct ListNode *next;
    };

    ListNode* newNode(int val) {
        ListNode *n = new ListNode();
        n->next = NULL;
        n->val = val;
        return n;
    }

    ListNode *head;
    int size;

    MyLinkedList() {
        head = NULL;
        size = 0;
    }
    
    int get(int index) {
        if (index > size - 1) return -1;
        if (index < 0) return -1;
        ListNode *curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        ListNode *temp = head;
        head = newNode(val);
        head->next = temp;
        size ++;
    }
    
    void addAtTail(int val) {
        ListNode *curr = head;
        if (head == NULL) {
            head = newNode(val);
            return;
        }
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = newNode(val);
        size ++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }
        ListNode *curr = head;
        for (int i = 1; i < index; i++) {
            curr = curr->next;
        }
        ListNode *temp = curr->next;
        ListNode *n = newNode(val);
        curr->next = n;
        n->next = temp;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0) return;
        if (index > size - 1) return;
        if (index == 0) {
            ListNode *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        ListNode *curr = head;
        for (int i = 1; i < index; i++) {
            curr = curr->next;
        }
        ListNode *temp = curr->next->next;
        delete curr->next;
        curr->next = temp;
        size --;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */