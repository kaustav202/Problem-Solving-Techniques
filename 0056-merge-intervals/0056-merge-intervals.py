class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals = sorted(intervals, key = lambda x : x[0])
        res = []
        for x in intervals:
            if not res or x[0] > res[-1][-1]:
                # if res is null or new interval starts after the end of last interval
                res.append(x)
            else:
                # extend interval of last item
                res[-1][-1] = max(res[-1][-1], x[-1])
        return res