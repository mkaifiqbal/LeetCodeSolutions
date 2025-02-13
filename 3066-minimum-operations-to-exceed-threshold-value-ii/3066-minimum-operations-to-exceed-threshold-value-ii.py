import heapq
class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        q =[]
        count=0
        for i in nums:
            heapq.heappush(q,i)
        for j in range(len(nums)-1):
            x= heapq.heappop(q)
            y= heapq.heappop(q)
            if x >= k:
                return count
            else:
                a= x*2 + y
                heapq.heappush(q,a)
                count+=1
        return count