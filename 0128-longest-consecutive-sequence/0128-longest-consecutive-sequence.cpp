class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        nums.sort()
        max_con = 1
        curr = 1
        for i in range(1,len(nums)):
            if nums[i] == nums[i-1] + 1:
                curr+=1
            elif nums[i] != nums[i-1]:
                curr = 1
            max_con = curr if curr > max_con else max_con
        return max_con