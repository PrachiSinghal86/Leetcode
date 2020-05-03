class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        l=len(nums)
        dict={}
        m=0
        s=0
        for i in range(l):
            if nums[i]==0:
                s=s-1
            else:
                s=s+1
            if s==0:
                m=i+1
            else:
                if s in dict:
                    if m<(-dict[s]+i):
                        m=-dict[s]+i
            
                else:
                    dict[s]=i
        return m
            
        