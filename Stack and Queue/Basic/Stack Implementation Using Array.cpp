
class Stack {
    
public:
    int topindex = -1;
    int *arr;
    int N;

    Stack(int capacity) {
        N = capacity;
        arr = new int[capacity];
    }

    void push(int num) {
        if(!isFull()){
            topindex++;
            arr[topindex] = num;
        }
    }

    int pop() {
        if(!isEmpty()){
            topindex--;
            return arr[topindex+1];
        }
        else{
            return -1;
        }
    }
    
    int top() {
        if(!isEmpty()){
            return arr[topindex];
        }
        else{
            return -1;
        }
    }
    
    int isEmpty() {
        if(topindex == -1) return 1;//empty
        return 0;
    }
    
    int isFull() {
        if(topindex == N-1) return 1;//full
        return 0;
    }
};
