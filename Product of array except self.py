class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l=len(nums)
        
        ot=[]
        ot.append(1)
        t=nums[0]
        for i in range(1,l):
            ot.append(t)
            t=t*nums[i]
      
        t=1
        i=l-1
        while i>=0:
            ot[i]*=t
            
            t=t*nums[i]
            i-=1
        return ot
            
        