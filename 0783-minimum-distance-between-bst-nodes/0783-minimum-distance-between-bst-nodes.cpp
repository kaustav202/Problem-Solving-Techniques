class Solution {
public:
void helper(TreeNode*root,int&res,int&pre){
    if(!root)return;
    helper(root->left,res,pre);
    if(pre!=-1)res=min(res,root->val-pre);
    pre=root->val;
    helper(root->right,res,pre);
}
    int minDiffInBST(TreeNode* root) {
        int res=INT_MAX;
        int pre=-1;
        helper(root,res,pre);
        return res;
    }
};