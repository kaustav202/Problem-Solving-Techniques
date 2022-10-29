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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode m (INT_MIN);
        ListNode *tracker = &m;
        
        while(list1 && list2){
            if ( list1->val < list2->val ){
                tracker->next = list1;
                list1 = list1->next;
            }
            else{
                tracker->next = list2;
                list2 = list2->next;
            }
            tracker = tracker->next;
        }
        
        tracker->next = list1 ? list1 : list2;
        
        return m.next;
    }
};
