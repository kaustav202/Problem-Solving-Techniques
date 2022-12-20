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
    
    ListNode* solve(ListNode* &head, int &marked){
        if(!head) return head;
        head->next = solve(head->next, marked);
        if(head->next){
            if(head->val == head->next->val){
                marked = head->val;
                return head->next;
            }
            if(head->next->val == marked){
                head->next = head->next->next;
            }
        }
        return head;
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        int marked = INT_MIN;
       ListNode* ans = solve(head, marked);
        if(ans){
            ans = ans->val == marked? ans->next : ans;
        }
       return ans;
    }
};