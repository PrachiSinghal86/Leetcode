class Solution:
    def rob(self, nums: List[int]) -> int:
        l=len(nums)
        if l==0:
            return 0
        if l==1:
            return nums[0]
        elif l==2:
            return max(nums[0],nums[1])
        d=[0]*l
        d[0]=nums[0]
        d[1]=max(nums[0],nums[1])
        for i in range(2,l):
            d[i]=max(d[i-2]+nums[i],d[i-1])
        return d[l-1]
            
        