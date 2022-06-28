class Solution:
    def interpret(self, command: str) -> str:
        res =''
        g = 'G'
        o = '()'
        al = '(al)'
        i = 0
        l = len(command)
        while i < l:
            if command[i] == 'G':
                i+=1
                res+='G'
            elif l-i >=2 and command[i:i+2] == '()':
                i+=2
                res+='o'
            elif l-i >=4 and command[i:i+4] == '(al)':
                res+='al'
                i+=4
        return res