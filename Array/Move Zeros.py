class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        c=nums.count(0)
        d=0
        while(d<c):
            d+=1
            nums.remove(0)
        while(c):
            nums.append(0)
            c-=1
        
            
        