class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dict = {} 
        for strVal in strs: 
          
        
            key = ''.join(sorted(strVal)) 
          
         
            if key in dict.keys(): 
                dict[key].append(strVal) 
            else: 
                dict[key] = [] 
                dict[key].append(strVal) 
        s=[]
        for key in dict: 
            s.append(dict[key])
        return s
            
            
            
        