class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        l=len(nums)
        if l==0:
            return 0
        v=[1]*l
        for i in range(1,l):
            for j in range(i):
                if v[i]<v[j]+1 and nums[i]>nums[j]:
                    v[i]=v[j]+1
        return max(v)
        