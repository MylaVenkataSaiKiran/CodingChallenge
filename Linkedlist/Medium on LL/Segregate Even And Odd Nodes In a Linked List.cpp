/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

//O(N)-time & O(N)-space
Node* segregateEvenOdd(Node* head)
{
    if(head == NULL || head->next == NULL) return head;
    Node* eventail = new Node();
    Node* oddtail = new Node();
    Node* evenhead = eventail;
    Node* oddhead = oddtail;
    Node* temp = head;
    while(temp != NULL){
        if((temp->data)%2==0){
            eventail->next = temp;
            eventail = eventail->next;
        }
        else{
            oddtail->next = temp;
            oddtail = oddtail->next;
        }
        temp = temp->next;
    }
    oddtail->next = NULL;
    eventail->next = oddhead->next;
    delete oddhead;
    return evenhead->next;
}
