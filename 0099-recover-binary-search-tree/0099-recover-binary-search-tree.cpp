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
    vector<int> v;
    void In(TreeNode* root) {
        if (root) {
            In(root->left);
            v.push_back(root->val);
            In(root->right);
        }
    }
    void recoverTree(TreeNode* root) {
        In(root);
        vector<int> v1 = v;
        sort(v.begin(), v.end());
        unordered_map<int, int> um;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] != v1[i]) {
                um[v1[i]] = v[i];
            }
        }
        int n=0;
        queue<TreeNode*> q;
        if (um.find(root->val) != um.end()) {
            unordered_map<int, int>::iterator itr = um.find(root->val);
            root->val = itr->second;
            n++;
        }
        q.push(root);
        while (!q.empty()) {
            TreeNode* ptr = q.front();
            q.pop();
            if (ptr->left) {
                q.push(ptr->left);
                if (um.find(ptr->left->val) != um.end()) {
                    unordered_map<int, int>::iterator itr =
                        um.find(ptr->left->val);
                    ptr->left->val = itr->second;
                    n++;
                }
            }
            if (ptr->right) {
                q.push(ptr->right);
                if (um.find(ptr->right->val) != um.end()) {
                    unordered_map<int, int>::iterator itr =
                        um.find(ptr->right->val);
                    ptr->right->val = itr->second;
                    n++;
                }
            }
            if(n==2){
                break;
            }
        }
        // return root;
    }
};