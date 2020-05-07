class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        dict={}
        dict1={}
        f=list(map(str,s.split()))
        l=len(pattern)
        l1=len(f)
        if l!=l1:
            
            return False
        for i in range(l):
            
            if pattern[i] in dict:
                if dict[pattern[i]]!=f[i]:
                    return False
            
            elif pattern[i] not in dict:
                if f[i] in dict1:
                    
                    return False
                dict[pattern[i]]=f[i]
                dict1[f[i]]=1
            
                
                
        return True