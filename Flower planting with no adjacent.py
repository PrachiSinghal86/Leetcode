class Solution:
    def gardenNoAdj(self, N: int, paths: List[List[int]]) -> List[int]:
        l=len(paths)
        v=[0]*(N+1)
        g={}   
        for i in range(l):
            if paths[i][1] in g:
                g[paths[i][1]].append(paths[i][0])
            else:
                g[paths[i][1]]=[paths[i][0]]
            if paths[i][0] in g:
                g[paths[i][0]].append(paths[i][1])
            else:
                g[paths[i][0]]=[paths[i][1]]
                
        
        v[1]=1
    
        for i in range(2,N+1):
            dict={}
            if i in g:
                for k in g[i]:
                    if v[k]>0:
                        dict[v[k]]=1
                for m in range(1,5):
                    if m not in dict:
                        v[i]=m
                        break
        for i in range(1,N+1):
            if v[i]==0:
                v[i]=1
        return v[1:N+1]
                    
                
            
            
        