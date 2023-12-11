/**
 * Definition of doubly linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node* deleteAllOccurrences(Node* head, int k) {

    Node *temp = head;

    while(temp != NULL){
        if(temp->data == k){
            if(temp->prev == NULL){
                head = head->next;
            }
            Node* left = temp->prev;
            Node* right = temp->next;

            if(left) left->next = right;
            if(right) right->prev = left;
            delete temp;

            temp = right;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}
