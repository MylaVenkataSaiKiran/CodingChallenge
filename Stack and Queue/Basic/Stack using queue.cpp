class Stack {
	// Define the data members.
    queue<int> q;

   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return q.size();
    }

    bool isEmpty() {
        if(q.empty()) return 1;
        return 0;
    }

    void push(int element) {
        q.push(element);
        for(int i=0; i<getSize()-1; i++){
            q.push(q.front());//insert front ele at back
            q.pop();//removes front ele
        }
    }

    int pop() {
        if(isEmpty()){
            return -1;
        }
        int x = q.front(); //as recent ele is at front
        q.pop();//removes front ele
        return x;
    }

    int top() {
        if(isEmpty()){
            return -1;
        }
        return q.front();
    }
};