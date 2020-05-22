class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        
        
        l=len(graph)
        i=0
        v=[0]*l
        q=[]
        for i in range(l):
            if v[i]==0:
                q.append(i)
                lq=0
                v[i]=1
                while lq>=0:
                    a=q[0]
                    q.pop(0)
                    lq-=1
                    if v[a]==1:
                        h=2
                    else:
                        h=1
                    lm=len(graph[a])
                    for j in range(lm):
                        if v[graph[a][j]]==0:
                            v[graph[a][j]]=h
                            q.append(graph[a][j])
                            lq+=1
                        elif v[graph[a][j]]!=h:
                            return False
        return True
        
                
                
                
        
        