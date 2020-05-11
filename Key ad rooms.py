class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        l=len(rooms)
        v=[0]*l
        
        a=[0]
        t=0
        e=0
        while t<=e:
            v[a[t]]=1
            for i in range(len(rooms[a[t]])):
                if v[rooms[a[t]][i]]==0:
                    a.append(rooms[a[t]][i])
                    e+=1
            t+=1
        for i in range(l):
            if v[i]==0:
                return False
        return True
                
                    
        
        