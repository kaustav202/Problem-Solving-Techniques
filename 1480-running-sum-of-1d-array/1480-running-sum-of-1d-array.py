from itertools import accumulate
import operator as op

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        res = list(accumulate(nums,op.add))
        return res