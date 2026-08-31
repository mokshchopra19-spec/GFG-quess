class Solution:
    def longestUniqueSubstr(self, s):
        # code here
        r=0
        l=0
        maxi=0
        freq=[0]*26
        for r in range (len(s)):
            if freq[ord(s[r])-ord('a')]==1:
                while s[l]!=s[r]:
                    freq[ord(s[l])-ord('a')]-=1
                    l+=1
                l+=1
            
            freq[ord(s[r])-ord('a')]=1
            maxi=max(maxi,r-l+1) 
        return maxi