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

    priority_queue<int, vector<int>, greater<int>> p;

    void traverse(TreeNode* root){

        if(!root)
            return;
        p.push(root->val);
        traverse(root->left);
        traverse(root->right);
        return;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        traverse(root1);
        traverse(root2);
        vector<int> popcorn;
        while(!p.empty()){
            int t = p.top();
            popcorn.push_back(t);
            p.pop();
        }
        return popcorn;
    }
};
