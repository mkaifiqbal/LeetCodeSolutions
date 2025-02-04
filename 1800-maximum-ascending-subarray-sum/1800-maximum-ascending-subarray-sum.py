class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        
        maxsum =0
        sum1=nums[0]
        for i in range(1,len(nums)):
            if nums[i-1] < nums[i]:
                sum1 += nums[i]
            else :
                maxsum = max(maxsum,sum1)
                sum1= nums[i]
        return max(maxsum,sum1)
        