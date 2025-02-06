class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        ans=0
        l1={}
        n= len(nums)
        for i in range(0,n):
            for j in range(i+1,n):
                product = nums[i]* nums[j]
                if product not in l1:
                    l1[product]=0
                else:
                    l1[product]= l1[product]+1
            
                ans += 8 * l1[product]
        return ans
