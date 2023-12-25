class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;

    MyQueue() {
        
    }

    void copystack(stack<int> &x, stack<int> &y){
        while(x.size() > 0){
            y.push(x.top());
            x.pop();
        }
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(empty()) return -1;
        copystack(s1, s2);
        int x = s2.top();
        s2.pop();
        copystack(s2, s1);
        return x;
    }
    
    int peek() {
        if(empty()) return -1;
        copystack(s1, s2);
        int x = s2.top();
        copystack(s2, s1);
        return x;
    }
    
    bool empty() {
        if(s1.empty()) return 1;
        return 0;
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