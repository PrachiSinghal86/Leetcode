class Solution:
    def smallestDivisor(self, nums: List[int], threshold: int) -> int:
        e=sum(nums)
        s=1
        while s<e:
            m=(s+e)//2
            sm=0
            for i in range(len(nums)):
                sm=sm+(nums[i]//m)
                if(nums[i]%m!=0):
                    sm=sm+1
            if sm>threshold:
                s=m+1
            else:
                e=m
        return e
                