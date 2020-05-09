class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        l=len(s)
        lt=len(t)
        if l!=lt:
            return False
        else:
            for k in range(l):
                if s.count(s[k])!=t.count(s[k]):
                    return False
        return True
        