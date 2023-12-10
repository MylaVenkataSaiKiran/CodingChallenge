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
    //Hare and Tortoise(slow and fast pointer) O(N)-time
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) return NULL;

        ListNode* slow = head;
        ListNode* fast = head->next->next;

        //stop when slow points to prev node of middle 
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* x = slow->next;//to be deleted
        slow->next = x->next;
        delete x;
        return head;
    }
};