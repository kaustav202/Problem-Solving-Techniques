class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max_count = 0
        count = 0
        for x in nums:
            if x == 1:
                count += 1
                if count > max_count:
                    max_count = count
            else:
                count = 0
        return max_count