class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        v = 0
        op_map = { "--X" : -1, "X--" : -1, "X++" : 1, "++X" : 1}
        for x in operations:
            v += op_map[x]
        return v