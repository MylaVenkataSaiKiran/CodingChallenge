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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        //find length
        int k = 0;
        while(temp != NULL){
            temp = temp->next;
            k++;
        }
        //middle elem
        k = k/2;
        temp = head;
        while(k--){
            temp = temp->next;
        }
        return temp;
    }
};