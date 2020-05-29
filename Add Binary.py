class Solution:
    def addBinary(self, a: str, b: str) -> str:
        l1=len(a)-1
        l2=len(b)-1
        l3=""
        c=0
        while(l1>=0 and l2>=0):
            s=int(a[l1])+int(b[l2])+c
            l3=str(s%2)+l3
            
            if s>=2:
                c=1
            else:
                c=0
            l1-=1
            l2-=1
        while l2>=0:
            s=int(b[l2])+c
            l3=str(s%2)+l3
            
            if s==2:
                c=1
            else:
                c=0
            l2-=1
        while l1>=0:
            s=int(a[l1])+c
            l3=str(s%2)+l3
            if s==2:
                c=1
            else:
                c=0
            l1-=1
        if c==1:
            l3="1"+l3
        return l3
            
                
            
            