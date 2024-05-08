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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>q;
        if(root == NULL) return ans;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i = 0; i<n ;i++){
                TreeNode* it = q.front();
                q.pop();
                if(it->left != NULL) q.push(it->left);
                if(it->right != NULL) q.push(it->right);
                if(i== n-1) ans.push_back(it->val);
                
            }
        }
        return ans;
    }
};