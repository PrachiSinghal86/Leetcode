class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        if len(s)==0:
            return 0
        x=list(s.split())
        l=len(x)
        if l==0:
            return 0
        f=x[l-1]
        return(len(f))
        
        