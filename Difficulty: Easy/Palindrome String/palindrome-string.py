class Solution:
    def solve(self,start,end,s):
        if start>=end:
            return True
        if s[start]!=s[end]:
            return False
        return self.solve(start+1,end-1,s)    
    def isPalindrome(self, s):
        return self.solve(0,len(s)-1,s)
        
