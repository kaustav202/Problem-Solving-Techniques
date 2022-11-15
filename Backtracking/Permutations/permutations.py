class Solution:
      

    def permute(self, nums: List[int]) -> List[List[int]]:

        def backtrack(taken, sol, nums, res):
            if len(sol) == len(nums):
                res.append(sol.copy())
                return
            for i in range(len(nums)):
                if not taken[i]:
                    sol.append(nums[i])
                    taken[i] = True
                    backtrack(taken,sol,nums,res)
                    sol.pop()
                    taken[i] = False

        sol = []
        taken = [False] * len(nums)
        res = []
        backtrack(taken,sol,nums,res)
        return res
