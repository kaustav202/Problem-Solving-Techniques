class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        d = {}
        if len(nums) == 1:
            return nums[0]
        for i in range(len(nums)):
            c = nums[i]
            try:
                d[c] += 1
                if d[c] >= -(len(nums)//-2):
                    return c
                else:
                    continue
            except KeyError:
                d[c] = 1