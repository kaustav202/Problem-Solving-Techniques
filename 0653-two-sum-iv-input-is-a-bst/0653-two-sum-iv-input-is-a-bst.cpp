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
    
    unordered_map<int,bool> map;
    
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        
        int curr = root->val;
        int target = k-curr;
        if(map.find(target) != map.end()) return true;
        map[curr] = true;
        
        bool l = findTarget(root->left, k);
        bool r = findTarget(root->right, k);
        
        return l ? l : r;
    }
};