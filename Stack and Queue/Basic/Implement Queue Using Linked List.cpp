/**
 * Definition of linked list
 * class Node {
 * 
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 * 
 * Definition of Queue
 * struct Queue {
 *   Node* front;
 *   Node* rear;
 *   void push(int);
 *   int pop();
 *   
 *   Queue() {
 *       front = rear = NULL;
 *   }
 * };
 */

void Queue::push(int x) {
    if(front == NULL){//empty
        Node* newnode = new Node(x);
        front = newnode;
        rear = front;
    }
    else{
        Node* newnode = new Node(x);
        rear->next = newnode;
        rear = newnode;
    }
}

int Queue::pop() {
    if(front == NULL) return -1;
    
    int x = front->data;
    front = front->next;
    return x;
}