class Solution:
    def addToArrayForm(self, A: List[int], K: int) -> List[int]:
        l=len(A)
        c=0
        for i in range(l):
            c=c*10+A[i]
        c=c+K
        A=[]
        if c==0:
            A.append(0)
            return A
            
        while c:
            A.insert(0,c%10)
            c=c//10
        return A
        