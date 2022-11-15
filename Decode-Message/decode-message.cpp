import string

class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        encode = {}
        s = list(string.ascii_lowercase)
        ptr = 0
        for i in range(len(key)):
            if encode.get(key[i], -1) == -1 and key[i] != ' ':
                print(key[i],ptr)
                try:
                    encode[key[i]] = s[ptr]
                except:
                    # print(i,ptr)
                    pass
                ptr+=1
        encode[' '] = ' '
        res = ''
        for x in message:
            decode = encode[x]
            res+= decode
            pass
        return res
