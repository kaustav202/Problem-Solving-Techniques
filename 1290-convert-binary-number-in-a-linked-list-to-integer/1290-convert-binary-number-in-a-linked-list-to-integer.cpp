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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int i = 0;
        int res = 0;
        ListNode* temp1 = head;
        int ctr = 0;
        while(temp1!=NULL){
            temp1 = temp1->next;
            ctr++;
        }
        
        while(temp!= NULL){
            res += int(pow(2,ctr-1)) * temp->val;
            ctr--;
            temp = temp->next;
        }
        
        
        return res;
    }
};