class Solution:
    def isArraySpecial(self, nums: List[int]) -> bool:
        ans=True
        n=len(nums) 
        for i in range(1,n):
            if (nums[i-1]%2==0 and nums[i]%2==0) or (nums[i-1]%2!=0 and nums[i]%2!=0):
                ans = False
        
        return ans