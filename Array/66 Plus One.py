class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        l=len(digits)
        a=digits[l-1]
        f=a+1
        digits[l-1]=f%10
        c=f//10
        f=l-2
        while(f>=0 and c):
            c=(digits[f]+1)//10
            digits[f]=(digits[f]+1)%10
            f-=1
        if c and f==-1:
            digits.insert(0,1)
        return digits
            
        