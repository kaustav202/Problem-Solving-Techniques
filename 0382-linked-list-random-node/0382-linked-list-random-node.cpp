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
private:
    ListNode *head;
    int size=0;

    int len(ListNode* head){
        ListNode* mover=head;
        int n=0;
        while(mover){
            n++;
            mover=mover->next;
        }
        return n;
    }
public:
    
    Solution(ListNode* head) {
        this->head=head;
        size=len(head);
    }
    
    int getRandom() {
        int move=rand()%size;
        ListNode* mover=head;
        while(move){
            mover=mover->next;
            move--;
        }
        return mover->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */