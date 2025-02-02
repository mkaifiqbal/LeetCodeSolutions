class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        median=0
        nums = nums1+nums2
        nums.sort()
        n = len(nums)
        if n%2==0:
            median = (nums[int(n/2)]+nums[int(n/2)-1])/2
        else:
            median = nums[int(n/2)]
        return median