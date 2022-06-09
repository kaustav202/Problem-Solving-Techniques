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
        int ctr = 0;
        while(temp!=NULL){
            ctr++;
            temp = temp->next;
        }
        
        int till;
        
        if(ctr%2 == 1){
            till = (ctr+1)/2 - 1;
        }else{
            till = ctr/2 ;
        }
        
    
        ListNode* temp1 = head;
        while(till){
            temp1 = temp1->next;
            till--;
        }
        return temp1;
    }
};