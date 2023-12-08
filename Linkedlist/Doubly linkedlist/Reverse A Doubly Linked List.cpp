/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};
*/
// solution 2 : O(N)-time, O(1)-space
Node* reverseDLL(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* curr = head;
    Node* last = NULL;
    while(curr != NULL){
        last = curr->prev;
        curr->prev = curr->next;
        curr->next = last;
        curr = curr->prev; //move front but use prev, as we reversed links
    }
    head = last->prev;
    return head;
}


// Solution 1 : O(N)-time, O(1) - space
Node* reverseDLL(Node* head)
{   
    if(head==NULL || head->next == NULL) return head;
    
    Node* temp = head->next;
    Node* head1 = new Node(head->data);
    Node* back = head1;
    Node* x;
    while(temp != NULL){
        head1->prev = temp;
        if(head1->prev != NULL){
            x = temp->next;
            head1 = head1->prev;
            head1->next = back;
            head1->prev = nullptr;
            back = head1;
        }
        temp = x;
    }
    return head1;
}