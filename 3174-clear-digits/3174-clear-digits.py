class Solution:
    def clearDigits(self, s: str) -> str:
        # n= len(s)
        # mark= -1
        # l1=[]
        # ans=""
        # for i in range(0,n):
            
        #     if s[i].isdigit():
        #         l1.append(i)
        #         if i-1 not in l1:
        #             l1.append(i-1)
        #             mark=i-2
        #         else:
        #             l1.append(mark)
        #             mark = mark-1
        # for i in range(0,n):
        #     if i not in l1:
        #         ans += s[i]

        # return ans

        n= len(s)
        ans=[]
        s1=""
        for i in range(n):
            if s[i].isdigit():
                ans.pop()
            else:
                ans.append(s[i])
        for i in ans:
            s1+=i

        return s1

                

        