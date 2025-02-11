class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        n= len(s)
        m=len(part)
        stack =[]
        ans=""

        for i in range(n):
            stack.append(s[i])
            check=""
            if i>=m-1 and len(stack)>=m:
                for j in range(m):
                    check +=stack[len(stack)-m+j]
                    
                if check == part:
                    for j in range(m):
                        stack.pop()

        for i in stack:
            ans+=i
        return ans

        