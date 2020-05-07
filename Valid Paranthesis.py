class Solution:
    def isValid(self, s: str) -> bool:
        st=[]
        t=-1
        l=len(s)
        for i in range(l):
            if s[i]=='[' or s[i]=='{' or s[i]=='(':
                st.append(s[i])
                t+=1
            elif t==-1:
                
                return False
            elif s[i]==']':
                c=st.pop()
                t-=1
                if c!='[':
                    
                    return False
            elif s[i]==')':
                c=st.pop()
                t-=1
                if c!='(':
                   
                    return False
            else:
                c=st.pop()
                t-=1
                if c!='{':
                    
                    return False
        if len(st)==0:
            return True
        else:
            print(st)
            return False
                
        