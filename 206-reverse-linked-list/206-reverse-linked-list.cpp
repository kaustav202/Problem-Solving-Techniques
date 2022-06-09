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
    ListNode* reverseList(ListNode* head) {
    int ctr = 0;
    ListNode* temp = head;
        
    while(temp!=NULL){
        ctr++;
        temp = temp->next;
    }
    
        
    for(int i = 1; i<ctr; i++){
        
        if(ctr<=i){
            break;
        }
        
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        
        int tctr = ctr;
        while(tctr-1){
            temp1 = temp1->next;
            tctr--;
        }
        int last = temp1->val;
        
        int ti = i;
        while(ti-1){
            temp2 = temp2->next;
            ti--;
        }
        int first = temp2->val;
        
        temp1->val = first;
        temp2->val = last;
        
        ctr--;
    }
        
    return head;
}
   
};