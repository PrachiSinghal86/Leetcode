class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        l=len(nums)
        dict={}
        for i in range(l):
            if nums[i] not in dict:
                if nums.count(nums[i])>l//2:
                    return nums[i]
                dict[nums[i]]=1
            
                
                
                