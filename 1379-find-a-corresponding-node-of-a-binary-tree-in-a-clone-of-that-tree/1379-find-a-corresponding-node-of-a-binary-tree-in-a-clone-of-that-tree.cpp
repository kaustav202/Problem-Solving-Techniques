/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution {
public:
    int count = 0;
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if(original == NULL){
            return NULL;
        }
        if (original == target){
            return cloned;
        }
        TreeNode* l = getTargetCopy(original->left, cloned->left, target);
        TreeNode* r = getTargetCopy(original->right, cloned->right, target);
        return (l!=NULL) ? l : r;
    }
        
};