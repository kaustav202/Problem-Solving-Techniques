class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*> q;
        int s=0;
        q.push(root);
        while(!q.empty()){
            TreeNode*node=q.front();
            q.pop();
            if(node->left){
                if(node->left->left==NULL && node->left->right==NULL) s+=node->left->val;
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        return s;

    }
};