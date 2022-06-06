class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        cmax = 0
        for el in sentences:
            if len( el.split(" ") ) > cmax:
                cmax = len( el.split(" "))
        return cmax