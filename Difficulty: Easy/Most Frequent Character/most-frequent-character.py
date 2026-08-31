class Solution:
    def getMaxOccuringChar(self, s):
        maxcount=0
        count=0
        c=''
        for i in range (len(s)):
            count=s.count(s[i])
            if maxcount<count:
               maxcount =count
               c=s[i]
            if maxcount == count and c >s[i]:
                c=s[i]
                
        return c        