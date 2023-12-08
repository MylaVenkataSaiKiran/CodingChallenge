#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* back;
    public:
        Node(int val, Node* next1, Node* back1){
            data = val;
            next = next1;
            back = back1;
        }

        Node(int val){
            data = val;
            next = nullptr;
            back = nullptr;
        }
};

int main(){
    cout<<"creating a node: "<<endl;
    Node* x = new Node(10);
    cout<<"memory location of node: "<<x<<endl; //memory location of node
    cout<<"memory location of variable x: "<<&x<<endl; //memory location of x
    cout<<x->data<<endl; //data in node

    cout<<"deleting a node"<<endl;
    delete x;
    cout<<"deleted a node";
    return 0;
}