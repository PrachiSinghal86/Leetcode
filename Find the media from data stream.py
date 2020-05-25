import bisect
class MedianFinder:

    def __init__(self):
        self.l=0
        self.a=[]
        
        """
        initialize your data structure here.
        """
        

    def addNum(self, num: int) -> None:
        bisect.insort(self.a,num)
        self.l+=1
        
        

    def findMedian(self) -> float:
        if self.l%2!=0:
            return self.a[self.l//2]
        else:
            f=self.l//2
            s=self.a[f]+self.a[f-1]
            s=s/2
            return s
        


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()