class Solution(object):
    def decompressRLElist(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res = []
        for i in range(0,len(nums),2):
            first = nums[i]
            second = nums[i+1]
            con = [second] * first
            res += con
        return res