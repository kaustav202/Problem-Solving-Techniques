class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        m={
            "type": 0,
            "color": 1,
            "name": 2
        }
        c = 0
        for x in items:
            if x[m[ruleKey]] == ruleValue:
                c+=1
        return c
            