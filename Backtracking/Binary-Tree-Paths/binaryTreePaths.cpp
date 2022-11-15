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

    vector<string> sol;

    string convertVector(vector<int> &v){
        string s;
        for(int i = 0; i<v.size(); i++){
            s.append( to_string(v[i]));
            if(i != v.size() - 1){
                s.append("->");
            }
        }
        return s;
    }

    void findPAth(TreeNode* root, vector<int> &s){
        if(!root)
            return;
        
        int t = root->val;
        s.push_back(t);

        if(root->left == NULL && root->right == NULL){
            string res = convertVector(s);
            sol.push_back(res);
        }

        findPAth(root->left, s);
        findPAth(root->right, s);

        s.pop_back();

        return;
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> t;
        findPAth(root, t);
        return sol;
    }
};
