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

void helper(TreeNode** root,int val){
    if(*root==NULL){
            *root = new TreeNode(val);
            return;
        }
        
        if((*root)->val < val){
            helper(&((*root)->right),val);
        }else{
            helper(&((*root)->left),val);
        }
        return;
}

class Solution {
public:
    
    
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        helper(&root,val);
        return root;
    }
};