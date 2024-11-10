class Solution:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        uppercap = (len(b)//len(a)) + 2
        count = 1
        while count <= uppercap:
            if b in a*count:
                return  count
            else:
                count+=1
        return -1