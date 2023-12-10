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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* curr = even->next;
        bool flag = true;//for odd index
        while(curr != NULL){
            if(flag){
                even->next = curr->next;
                curr->next = odd->next;
                odd->next = curr;
                odd = odd->next;
                curr = even->next;
                flag = 0;
            }
            else{
                even = even->next;
                curr = curr->next;
                flag = 1;
            }
        }
        return head;
    }
};