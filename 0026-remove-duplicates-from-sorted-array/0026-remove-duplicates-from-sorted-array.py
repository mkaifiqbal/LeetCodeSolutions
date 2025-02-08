class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        my_set = set(nums)
        n=len(my_set)
        l1= sorted(my_set)
        print(my_set)
        for i in range(n):
            nums[i]=l1[i]
        return n
        