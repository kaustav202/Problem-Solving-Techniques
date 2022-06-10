class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        h = len(nums)//2
        r = []
        for i in range(0,h):
            r += [nums[i],nums[i+h]]
        return r