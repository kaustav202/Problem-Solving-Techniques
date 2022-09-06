class Solution:
    def maxProductDifference(self, nums: List[int]) -> int:
        m1 = max(nums)
        l1 = min(nums)
        nums.pop(nums.index(m1))
        nums.pop(nums.index(l1))
        m2 = max(nums)
        l2 = min(nums)
        return m1*m2 - l1*l2