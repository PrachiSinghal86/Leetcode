class Solution:
    def maxArea(self, height: List[int]) -> int:
        r=len(height)-1
        l=0
        s=0
        while l<r:
            s=max(s,(r-l)*min(height[l],height[r]))
            if height[l]<height[r]:
                l+=1
            else:
                r-=1
        return s