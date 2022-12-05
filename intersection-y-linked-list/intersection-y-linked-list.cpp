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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map< ListNode*, int> map;
        while(headB){
            map[headB] = 1;
            headB = headB->next;
        }
        while(headA){
            if(map.find(headA) != map.end()){
                return headA;
            }
            headA = headA->next;
        }
        return nullptr;
    }
};
