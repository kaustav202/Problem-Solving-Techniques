class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:

        new=[]
        for w in words:
            for i in words:
                if w in i and w!=i:
                    new.append(w)
                    break
        return new