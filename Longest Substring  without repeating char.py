class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        lt=0
        lp=0
        st=""
        l=len(s)
        for i in range(l):
            if st.count(s[i])==0:
                st=st+s[i:i+1]
                lt+=1
        
            else:
                if lt>lp:
                
                    lp=lt
                ind=st.index(s[i])
                st=s[i-lt+ind+1:i+1]
                    
                lt=len(st)
        if lt>lp:
    
            lp=lt
        return lp
        