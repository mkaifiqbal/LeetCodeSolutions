class Solution:
    def clearDigits(self, s: str) -> str:
        n= len(s)
        l1=[]
        s1=""
        for i in range(n):
            if s[i].isdigit():
                l1.pop()
            else:
                l1.append(s[i])
        for i in l1:
            s1+=i

        return s1

                

        
