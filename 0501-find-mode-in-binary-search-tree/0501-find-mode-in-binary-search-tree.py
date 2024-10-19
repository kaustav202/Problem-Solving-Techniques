class Solution:
    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        res = []
        res_count = 0 
        curr = None
        curr_count = 0
        def traverse(node):
            if not node:
                return
            traverse(node.left)
            nonlocal res, res_count, curr, curr_count
            if node.val == curr:
                curr_count += 1
            else:
                curr = node.val
                curr_count = 1
            if curr_count > res_count:
                res = [curr]
                res_count = curr_count
            elif curr_count == res_count:
                res.append(node.val)
            traverse(node.right)
        traverse(root)
        return res