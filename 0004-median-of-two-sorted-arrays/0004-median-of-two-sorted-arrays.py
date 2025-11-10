class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums = nums1 + nums2
        nums.sort()
        n = len(nums1)
        m= len(nums2)
        
        if ((n+m) %2 ==0):
            return (nums[((n+m)//2)-1]+ nums[(m+n)//2])/2
        else:
            return nums[(n+m)//2]
        