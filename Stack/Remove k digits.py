class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        s=[]
        l=len(num)
        if k==0:
            return num
        elif k>=l:
            return "0"
        else:
            s.append(num[0])
            ln=0
            i=1
            while i<l:
                
                while ln>=0 and ord(s[ln])>ord(num[i]) and k>0:
                    s.pop()
                    
                    ln-=1
                    k-=1
                s.append(num[i])
                ln+=1
                i+=1
            b=""
            while k>0 and ln>=0:
                s.pop()
                k-=1
                ln-=1
                
            while ln>=0 and s[0]=='0':
                s.pop(0)
                ln-=1
            if ln==-1:
                return "0"
            for i in range(ln+1):
                b=b+s[i]
            return b
                
        