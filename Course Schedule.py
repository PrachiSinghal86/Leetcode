class Solution:
    
    def cy(self,key:int,v:List[int],r:List[int],dict:List[int]):
        v[key]=1
        r[key]=1
        if dict[key]==0:
            r[key]=0
            return False
        for x in dict[key]:
            if v[x]==0:
                if self.cy(x,v,r,dict)==True:
                    
                    return True
            elif r[x]==1:
                
                return True
        r[key]=0
        
        return False
    def canFinish(self, n: int, p: List[List[int]]) -> bool:
        v=[0]*n
        r=[0]*n
        dict=[0]*n
        l=len(p)
        for i in range(l):
            if dict[p[i][1]]==0:
                dict[p[i][1]]=[p[i][0]]
            else:
                dict[p[i][1]].append(p[i][0])
        print(dict)
        for i in range(n):
            try:
                
                if dict[i]==0:
                    
                    continue
                else:
                    if v[i]!=1:
                        if self.cy(i,v,r,dict):
                            
                            return False
            except:
                if v[i]!=1:
                    if self.cy(i,v,r,dict):
                        
                        return False
             
        return True
                    
                
                
            
        