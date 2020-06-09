class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        l1=len(s)
        l2=len(t)
        i=0
        j=0
        while i<l1 and j<l2:
            if s[i]==t[j]:
                i+=1
            j+=1
        if i==l1:
            return True
        else:
            return False
        