class Solution:
    def gcd(self,x:int,y:int)->int:
        if y==0:
            return x
        else:
            return gcd(y,x%y)
    def hasGroupsSizeX(self, deck: List[int]) -> bool:
        l=len(deck)
        if l<2:
            return False
        dict={}
        
        for i in range(l):
            if deck[i] not in dict:
                dict[deck[i]]=1
            else:
                dict[deck[i]]+=1;
        
    
        g=dict[deck[0]]
        for key in dict:
            g=gcd(g,dict[key])
        if g>=2:
            return True           