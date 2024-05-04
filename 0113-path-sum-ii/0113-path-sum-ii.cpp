// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
// 
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }

class Solution {
public:
     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        solve(ans,{},root,targetSum,0);
        return ans;
    }
    void solve(vector<vector<int>>& ans,vector<int>v,TreeNode* root, int& targetSum,int sum){        
        if(!root)return;
        
        v.push_back(root->val);
        sum+=root->val;
        
        if(!root->left && !root->right && targetSum==sum){
            ans.push_back(v);
            return;
        }
       solve(ans,v,root->right,targetSum,sum); 
       solve(ans,v,root->left,targetSum,sum);
       
    }
    
   
};