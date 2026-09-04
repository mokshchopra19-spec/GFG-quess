class Solution:
    def factorial(self, n: int) -> int:
        if n==0:
            return 1 
        return n *self.factorial(n-1)