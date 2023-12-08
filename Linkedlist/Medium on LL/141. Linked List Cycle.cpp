/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution {
    public:
        //solution 2 : O(N)-time O(1)-space :: FAST & SLOW POINTER
        bool hasCycle(ListNode* head){
            if(head == NULL || head->next == NULL) return false;
            ListNode* slow = head;
            ListNode* fast = head;

            while(fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
                if(fast == slow){
                    return true;
                }
            }
            return false;
        }

        //solution 1 : O(N)-time O(N)-space :: HASHING
        bool hasCycle(ListNode *head) {
            if(head == NULL || head->next == NULL)  return false;
            unordered_map<ListNode* , int> m;

            ListNode* temp = head;
            ListNode* fast = head;
            while(temp != NULL){
                if(m.find(temp)!=m.end()){
                    return true;
                }
                m[temp]++;
                temp = temp->next;
            }
            return false;
        }
};