/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
class Solution {
public:
    //MERGESORT O(N)-time and O(1)-space
    ListNode* merge(ListNode* first, ListNode* second){
        ListNode* ans = new ListNode();
        ListNode* newhead = ans;
        while(first != NULL && second != NULL){
            if(first->val <= second->val){
                ans->next = first;
                first = first->next;
            }
            else if(first->val > second->val){
                ans->next = second;
                second = second->next;
            }
            ans = ans->next;
        }
        //remainging list lastnode;
        if(first != NULL){
            ans->next = first;
        }
        if(second != NULL){
            ans->next = second;
        }
        return newhead->next; //since newhead is an extra node that we created
    }

    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        //FIND MIDDLE NODE hare-tortoise algorithm
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = NULL;//for first halve
        while(fast != NULL && fast->next != NULL){
            temp = slow;//builds first half
            slow = slow->next;//head of second half
            fast = fast->next->next;
        }
        temp->next = NULL;//first half end
        //SORT ON TWO HALVES
        ListNode* first = sortList(head);
        ListNode* second = sortList(slow);
        //MERGE TWO HALVES
        return merge(first, second);
    } 
};