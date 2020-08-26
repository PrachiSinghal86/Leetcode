class Solution:
   
     def ts(self,v:List[int],key:int,d:List[List[int]],st:List[int],f:int)->int:
        v[key]=1
        
        l=len(d[key])
        for k in range(l):
            if v[d[key][k]]==1 and d[key][k] not in st:
                st=[]
                f=1
                return f
            if v[d[key][k]]==0:
                f=self.ts(v,d[key][k],d,st,f)
        if f==0:
            st.append(key)
        
        return f
    
     def findOrder(self, n: int, p: List[List[int]]) -> List[int]:
        l=len(p)
        v=[0]*n
        st=[]
        d=[[] for i in range(n)]
        for i in range(l):
            d[p[i][1]].append(p[i][0])
        
        f=0
        for i in range(n):
            if v[i]==0 :
                f=self.ts(v,i,d,st,f)
                if f==1:
                    st=[]
                    return st
        st.reverse()
        return st         
   
                
        
   
   
        
      
        