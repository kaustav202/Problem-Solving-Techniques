#include <queue>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution {
public:
    
    queue<int> s;
    
    void traverse(TreeNode* root){
                if (root == NULL){
                    return;
                }

                traverse(root->left);
                s.push(root->val);
                traverse(root->right);
                return;
        };
    
    TreeNode* increasingBST(TreeNode* root) {
        
        traverse(root);
        
        TreeNode * head = new TreeNode(s.front());
        s.pop();
       
        TreeNode* t = head;
        while(!s.empty()){
            TreeNode* n = new TreeNode(s.front());
            t->right = n;
            t = t->right;
            s.pop();
        }
        return head;
    }
};