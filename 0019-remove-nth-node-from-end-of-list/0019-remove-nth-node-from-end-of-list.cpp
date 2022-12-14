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

    ListNode* solve( ListNode* head, int &n, ListNode* &marked){
        if(!head) return NULL;
        solve(head->next, n, marked);
        n--;
        if(n==0){
            marked = head;
        }
        if(head->next == marked){
            head->next = head->next->next;
        }
        return head;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        // ListNode* marked;
        // head  = solve(head, n, marked);
        // return head == marked ? head->next : head;
        ListNode * first = head;
        ListNode * second = head;
        while(n--) first = first->next;
        if(!first) return head->next;
        while(first->next){
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        return head;
    }
};