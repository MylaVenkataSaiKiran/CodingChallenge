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
    //solution 2 : O(M+N)-Time O(1)-space
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB){
        if(headA == NULL || headB == NULL) return NULL;

        ListNode *t1 = headA, *t2 = headB;
        while(t1 != t2){
            t1 = t1->next;
            t2 = t2->next;
            if(t1 == t2) return t1;
            if(t1 == NULL) t1 = headB;
            if(t2 == NULL) t2 = headA;
        }
        return t1;
    }

    //solution 1: using hashing O(M+N)-time O(N)-space
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int> m;
        ListNode *t1 = headA, *t2 = headB;
        while(t1 != NULL){
            m[t1]++;
            t1 = t1->next;
        }

        while(t2 != NULL){
            if(m.find(t2)!=m.end()){
                return t2;
            }
            t2 = t2->next;
        }

        return NULL;
    }
};