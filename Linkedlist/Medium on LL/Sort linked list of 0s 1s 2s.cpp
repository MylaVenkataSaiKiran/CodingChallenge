/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/


//solution 1: O(N)-time O(1)-space
Node* sortList(Node *head){
    Node* l = new Node();
    Node* lhead = l;
    Node* m = new Node();
    Node* mhead = m;
    Node* h = new Node();
    Node* hhead = h;

    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            l->next = temp;
            l = l->next;
        }
        else if(temp->data == 1){
            m->next = temp;
            m = m->next;
        }
        else{
            h->next = temp;
            h = h->next;
        }
        temp = temp->next;
    }

    h->next = NULL;
    m->next = hhead->next;
    l->next = mhead->next;
    return lhead->next;
}