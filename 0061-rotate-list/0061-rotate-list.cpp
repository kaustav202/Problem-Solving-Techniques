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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int l=0;
        ListNode* temp = head;
        while(temp){
            l++;
            temp=temp->next;
        }
        if(k > l) k %= l;
        if(k == l || k == 0) return head;
        
        temp = head;
        int cnt = l - k;
        while(--cnt > 0){
            temp = temp->next;
        }
        // Point temp at k remaining nodes
        ListNode* h1 = head;
        // store original head
        head = temp->next;
        // Make new head
        temp->next = NULL;
        // Terminate segment1 ( tail )
        ListNode* temp2 = head;
        while(temp2->next) temp2 = temp2->next;
        // Move to end of segment2
        temp2->next = h1;
        // Connect end to segment1
        return head;
    }
};