class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        d = {}
        for x in s:
            if not d.get(x):
                d[x] = 0
            d[x] = d[x] + 1
        c = {}
        for x in t:
            if not c.get(x):
                c[x] = 0
            c[x] = c[x] + 1
        print(c)
        print(d)
        for k in c:
            if not d.get(k):
                return k
            else:
                if c[k] > d[k]:
                    return k