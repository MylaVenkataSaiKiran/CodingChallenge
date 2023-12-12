/**
 * Definition of doubly linked list:
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
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *************************************************************************/
//O(N)-time and O(1)-space
vector<pair<int, int>> findPairs(Node* head, int k)
{
    Node* first = head;
    Node* second = head;
    vector<pair<int, int>> v;
    if(head == NULL || head->next == NULL){
        return v;
    }

    //second stops at tail
    while(second->next != NULL){
        second = second->next;
    }

    while(first->data < second->data){
        if(first->data + second->data == k){
            v.push_back(make_pair(first->data, second->data));
            first = first->next;
            second = second->prev;
        }
        else if(first->data + second->data > k){
            second = second->prev;
        }
        else{
            first = first->next;
        }
    }
    return v;
}