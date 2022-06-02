class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        present_dict = {}
        for i in range(len(nums)):
            try:
                if present_dict[nums[i]] == 1:
                    return True
            except KeyError:
                present_dict[nums[i]] = 1
        return False