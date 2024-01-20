class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = ''.join(char for char in s if char.isalpha() or char.isdigit())

        if len(s) == 0 :
            return True

        s = s.lower()
        print(s)
        
        x = s
        j = len(s)-1
        for i in range(0, len(s)):
            if s[i] != s[j]:
                return False
            j = j-1
        
        return True