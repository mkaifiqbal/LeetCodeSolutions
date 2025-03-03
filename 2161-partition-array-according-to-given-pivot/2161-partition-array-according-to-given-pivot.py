class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        left=[]
        equal=[]
        right=[]
        for i in nums:
            if i>pivot:
                right.append(i)
            elif i==pivot:
                equal.append(i)
            else:
                left.append(i)
        return left + equal + right

        