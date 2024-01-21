class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if s == t : 
            return True

        prev = -1
        i = 0

        while i < len(s) :
            print(t)
            print(prev)
            print(s[i])
            print(t.find(s[i]))
            c = s[i]
            if t.find(c) >= 0 and t.find(c) > prev:
                prev = t.find(c)
                i += 1
            elif t.find(c) >= 0 :
                prev -= 1
                index = t.find(c)

                # Check if the character 'c' is found in the string
                if index != -1:
                    # Replace only the first occurrence of 'c' with an empty string
                    t = t[:index] + t[index + 1:]
            
            else :
                return False
        
        return True