class Solution:
    # Function to find uncommon characters between two strings.
    def uncommonChars(self, s1, s2):
        ans = ""
        st1=set(s1)
        st2=set(s2)
        
        for x in st2:
            if x not in st1:
               ans+= x
               
        for x in st1:
            if x not in st2:
               ans+= x   
        
        return ''.join(sorted(ans))