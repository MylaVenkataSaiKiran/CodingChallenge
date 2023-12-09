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

    //O(N)-time
    ListNode* reversell(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* newhead = reversell(head->next);
        head->next->next = head;
        head->next = NULL;
        return newhead;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //edge cases:
        if(head == NULL || head->next == NULL) return NULL;

        ListNode* newhead = reversell(head);
        ListNode* temp = newhead;

        if(n==1){//edge case
            newhead = temp->next;
            temp->next = NULL;
            head = reversell(newhead);
            return head;
        }

        for(int i=0; i<n-2; i++){//reach n-1 th node
            temp = temp->next;
        }
        ListNode* x = temp->next;
        if(temp->next->next == NULL){ //edge case
            temp->next = NULL;
        }
        else{
            temp->next = temp->next->next;
        }
        delete x;
        head = reversell(newhead);
        return head;
    }
};