class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        l=len(ransomNote)
        for i in range(l):
            if ransomNote.count(ransomNote[i])>magazine.count(ransomNote[i]):
                return False
        return True