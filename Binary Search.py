class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l=len(nums)
        s=0
        e=l-1
        while s<=e:
            m=(s+e)//2
            if nums[m]==target:
                return m
            elif nums[m]<target:
                s=m+1
            else:
                e=m-1
        return -1