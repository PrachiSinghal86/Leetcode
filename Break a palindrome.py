class Solution:
    def breakPalindrome(self, palindrome: str) -> str:
        l=len(palindrome)
        if l<=1:
            return ""
        else:
            i=0
            while i<l and palindrome[i]=='a':
                i+=1
            if i==l:
                palindrome=palindrome[:l-1]+'b'
            elif l%2!=0 and i==l//2:
                if palindrome[i+1]=='a': 
                    while i<l-1 and palindrome[i+1]=='a':
                        i+=1
                    try:
                        palindrome=palindrome[:i]+'b'+palindrome[i+1:]
                    except:
                        palindrome=palindrome[:i]+'b'
                else:
                    try:
                        palindrome=palindrome[:i+1]+'a'+palindrome[i+2:]
                    except:
                        palindrome=palindrome[:i+1]+'a'                                             

                                        
                        
                    
            else:
                palindrome=palindrome[:i]+'a'+palindrome[i+1:]
        return palindrome
        