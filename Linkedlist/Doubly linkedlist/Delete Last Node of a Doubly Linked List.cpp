/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    // Edge cases:
    if(head == NULL){
        return NULL;
    }
    else if(head->next == NULL){
        delete head;
        return NULL;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* backnode = temp->prev;
    backnode->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;
}
