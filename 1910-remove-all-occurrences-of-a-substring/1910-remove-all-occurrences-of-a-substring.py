class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        n= len(s)
        m=len(part)
        stack =""

        for i in range(n):
            stack+=s[i]
            check=""
            o=len(stack)
            if i>=m-1 and o>=m and stack[-1]==part[-1]:
                check = stack[o-m::]
                
                    
                if check == part:
                    stack = stack[0:o-m] 
        return stack
        