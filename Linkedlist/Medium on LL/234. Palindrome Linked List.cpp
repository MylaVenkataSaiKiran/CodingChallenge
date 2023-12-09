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
    //OPTIMAL Solution : Reverse second half and compare 
    // O(N)-time and O(1)-space
    ListNode* reverseLL(ListNode* head){
        if(head == NULL ||head->next == NULL){
            return head;
        }
        ListNode* newhead = reverseLL(head->next);
        head->next->next = head;
        head->next = NULL;
        return newhead;
    }

    bool isPalindrome(ListNode* head) {
        //edge cases
        if(head == NULL || head->next == NULL) return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        //Find middle node
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        //reverse second half
        ListNode* newhead = reverseLL(slow->next);
        //compare two halves
        ListNode* first = head;
        ListNode* second = newhead;
        while(second != NULL){
            if(first->val != second->val){
                return false;
            }
            first = first->next;
            second = second->next;
        }
        //get original LL again
        reverseLL(newhead);
        return true;
    }

    //naive solution O(2N)-time and O(N)-space
    bool isPalindrome(ListNode* head){
        vector<int> v;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }

        //compare
        for(int i=0; i<v.size(); i++){
            if(v[i] != v[v.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};