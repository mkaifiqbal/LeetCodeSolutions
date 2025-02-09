class Solution:
    def countBadPairs(self, nums: List[int]) -> int:
        good_pair=0
        n= len(nums)
        total_pair = (n*(n-1))//2
        mapping={}
        for i in range(n):
            val = nums[i]-i
            if val in mapping:
                good_pair += mapping[val]
            mapping[val]= mapping.get(val, 0) + 1

        return total_pair - good_pair
        