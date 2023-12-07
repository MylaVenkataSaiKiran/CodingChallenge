/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *deleteLast(Node *list){
    if(list == NULL || list->next == NULL){
        return NULL;
    }
    Node* temp = list;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = nullptr;
    return list;
}