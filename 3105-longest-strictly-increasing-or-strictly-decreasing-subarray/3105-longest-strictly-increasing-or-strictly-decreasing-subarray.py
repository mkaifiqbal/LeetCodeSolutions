class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        if not nums:
            return 0
    
        inc_len = 1  # Length of increasing subarray
        dec_len = 1  # Length of decreasing subarray
        max_len = 1  # Stores the maximum length
        
        for i in range(1, len(nums)):
            if nums[i] > nums[i - 1]:  # Increasing sequence
                inc_len += 1
                dec_len = 1  # Reset decreasing length
            elif nums[i] < nums[i - 1]:  # Decreasing sequence
                dec_len += 1
                inc_len = 1  # Reset increasing length
            else:  # Equal elements break the sequence
                inc_len = 1
                dec_len = 1

            max_len = max(max_len, inc_len, dec_len)
        
        return max_len