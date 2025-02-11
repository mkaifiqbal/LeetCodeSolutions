class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        n= len(s)
        m=len(part)
        stack =""

        for i in range(n):
            stack+=s[i]
            check=""
            if i>=m-1 and len(stack)>=m and stack[-1]==part[-1]:
                check = stack[len(stack)-m::]
                
                    
                if check == part:
                    stack = stack[0:len(stack)-m] 
        return stack
        