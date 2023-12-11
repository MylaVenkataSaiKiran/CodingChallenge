/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
//O(N)-time O(1)-space
Node* reversell(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* newhead = reversell(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

Node *addOne(Node *head)
{
    //Assuming there are no leading 0s
    Node* newhead = reversell(head);
    Node* temp = newhead;
    while(temp != NULL){
        if(temp->data < 9){
            temp->data++;
            return reversell(newhead);

        }
        else{
            temp->data = 0;
        }
        temp = temp->next;
    }
    //Add 1 at start and return, no need to reverse, as they are all 0s
    return new Node(1, newhead);
}
/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
//O(N)-time O(1)-space
Node* reversell(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* newhead = reversell(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

Node *addOne(Node *head)
{
    //Assuming there are no leading 0s
    Node* newhead = reversell(head);
    Node* temp = newhead;
    while(temp != NULL){
        if(temp->data < 9){
            temp->data++;
            return reversell(newhead);

        }
        else{
            temp->data = 0;
        }
        temp = temp->next;
    }
    //Add 1 at start and return, no need to reverse, as they are all 0s
    return new Node(1, newhead);
}
