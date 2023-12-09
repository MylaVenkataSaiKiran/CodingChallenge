/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    //Solution 2: OPTIMAL :: fast and slow pointer O(n)-time O(1)-space
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){//there is a loop
                slow = head; 
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow; // slow = fast occurs at staring pt of loop
            }
        }
        return NULL;
    }

    //Solution 1: using HASHING O(N)-time and O(N)-space
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        unordered_map<ListNode*, int> m;
        ListNode* temp = head;
        while(temp != NULL){
            if(m.find(temp)!=m.end()){
                return temp;
            }
            m[temp]++;
            temp = temp->next;
        }
        return NULL;
    }
};