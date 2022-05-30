class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        #res = list( map( lambda x: x + sum(nums[:nums.index(x)]), nums ))
        res = [ sum(nums[:i+1]) for i in range(len(nums))]
        return res