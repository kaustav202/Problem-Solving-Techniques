class Solution:
    def minimumSwap(self, s1: str, s2: str) -> int:
        x_y = 0
        y_x = 0
        for a,b in zip(s1,s2):
            if a != b:
                if a == 'x':
                    x_y += 1
                else:
                    y_x += 1
        if ((x_y + y_x) % 2 == 1):
            return -1
        res = x_y//2
        res += y_x//2
        if (x_y%2 == 1 and y_x%2 == 1):
            res+= 2
        return res