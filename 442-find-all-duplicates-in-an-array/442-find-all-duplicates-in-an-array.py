class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        seen = {}
        for x in nums:
            if seen.get(x,-1) == -1:
                seen[x]=1
            else:
                seen[x]+=1
        res = []
        for x in nums:
            if seen[x] != 1:
                res.append(x)
                seen[x] = 1
        return res