#include<iostream>

using namespace std;

class Node{ //can use struct as well(by default struct takes vars as public)
    public:
        int data;
        Node* next;

    public:
        Node (int val, Node* nxt1){
            data = val;
            next  = nxt1;
        }
        Node (int val){
            data = val;
            next = NULL;
        }
};

int main(){
    // 1 way to create node
    Node* x = new Node(10, nullptr);
    cout<<"returns memory val: ";
    cout<<x<<endl;
    cout <<"returns data stored in the memory: ";
    cout<<x->data<<endl;
    cout<<x->next<<endl;

    // 2nd way to create node
    Node y = Node(21, nullptr); //simply y is an object
    cout << y.data<<endl; //we cannot use '->' here
    cout << y.next<<endl;

    cout<<"Deleting a node";
    //2 ways to delete a node
    free(x); //1 way
    delete x; //2nd way
    return 0;
}