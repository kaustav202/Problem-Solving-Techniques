class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        c=0
        for x in words:
            for y in x:
                if y in allowed:
                    continue
                else:
                    break
            else:
                c+=1
        return c