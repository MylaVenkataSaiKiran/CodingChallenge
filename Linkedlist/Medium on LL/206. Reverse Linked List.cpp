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
    ListNode* reverseList(ListNode* head) {
        //edge cases:
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* curr = head;
        ListNode* back = NULL;
        ListNode* front = curr->next;
        while(front != NULL){
            curr->next = back;
            back = curr;
            curr = front;
            front = front->next;
        }
        curr->next = back;
        return curr;
    }
};