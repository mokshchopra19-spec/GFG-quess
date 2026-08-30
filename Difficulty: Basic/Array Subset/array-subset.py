from collections import Counter
class Solution:
    def isSubset(self, a, b):
       return not (Counter(b) - Counter(a))
    
    
    
    
