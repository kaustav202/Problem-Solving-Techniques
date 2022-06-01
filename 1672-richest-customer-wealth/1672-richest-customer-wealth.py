class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max_bal = 0
        for customer in accounts:
            c_max = sum(customer)
            if c_max > max_bal:
                max_bal = c_max
            else:
                continue
        return max_bal