class Solution:
    def isPalindrome(self, A: str) -> bool:
        l=len(A)
        s=""
        for i in range(l):
            if (ord(A[i])>=65 and ord(A[i])<91) or (ord(A[i])>=97 and ord(A[i])<123 )or( ord(A[i])>=48 and ord(A[i])<=57):
                if ord(A[i])>=65 and ord(A[i])<91:
                    s=s+chr(ord(A[i])+32)
                else:
                    s=s+A[i]
        l=len(s)

        f=0
        for i in range(l//2):
            
            if s[i]==s[l-1-i]:
                continue
    
            else:
                return False
        return True
        