class Solution:
    def backspaceCompare(self, S: str, T: str) -> bool:
        l=len(S)
        i=0
        p=""
        while(i<l):
            if S[i]=="#":
                p=p[:-1]
                
            else:
                p=p+S[i]
            i+=1
        S=p[:]
        l=len(T)
        i=0
        p=""
        while(i<l):
            if T[i]=="#":
                p=p[:-1]
                
            else:
                p=p+T[i]
            i+=1
       
        if p==S:
            return True
        else:
            return False
        
            
            
            
        