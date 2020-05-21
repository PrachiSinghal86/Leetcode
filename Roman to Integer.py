class Solution:
    def romanToInt(self, s: str) -> int:
        l=len(s)
        c=0
        
        i=0
        while i<l:

            if s[i]=='I':
                try:
                    if s[i+1]=='V':
                        c=c+4
                        i+=2
                    elif s[i+1]=='X':
                        c=c+9
                        i+=2
                    else:
                        c=c+1
                        i+=1
                except:
                    c=c+1
                    i+=1

            elif s[i]=='X':
                try:
                    if s[i+1]=='L':
                        c=c+40
                        i+=2
                    elif s[i+1]=='C':
                        c=c+90
                        i+=2
                    else:
                        c=c+10
                        i+=1
                except:
                    c=c+10
                    i+=1
            elif s[i]=='C':
                try:
                    if s[i+1]=='D':
                        c=c+400
                        i+=2
                    elif s[i+1]=='M':
                        c=c+900
                        i+=2
                    else:
                        c=c+100
                        i+=1
                except:
                    c=c+100
                    i+=1
            elif s[i]=='L':
                c=c+50
                i+=1
            elif s[i]=='V':
                c=c+5
                i+=1
            elif s[i]=='D':
                c=c+500
                i+=1
            else:
                c=c+1000
                i+=1
        return c

        