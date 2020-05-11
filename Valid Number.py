class Solution:
    def isNumber(self, s: str) -> bool:
        s=s.strip()
        
        ed=0
        dot=0
        l=len(s)
        if l==0:
            return False
        for i in range(l):
            if s[i]=='+' or s[i]=='-':
                try:
                    if s[i+1]=='+' or s[i+1]=='-' or s[i+1]=='e':
                        print(s[i])
                        return False
                    if i!=0 and s[i-1]!='e':
                        print(s[i])
                        return False
                    elif s[i+1]=='.' and i==l-2:
                        return False
                except:
                    return False
            elif s[i]=='e':
                try:
                    if ed==1 or s[i+1]=='.' or i==0:
                        print(s[i])
                        return False
                except:
                    return False
                ed=1
                dot=1
            elif s[i]=='.' :
                try:
                    if dot==1 :
                        return False
                    elif i==0 and l==1:
                        return False
                    elif i==0 and s[i+1]=='e':
                        return False
                except:
                    return False
                dot=1
            elif ord(s[i])<48 or ord(s[i])>57:
                print(s[i])
                return False
        return True
                
            
            
            
            
                
            
    
        