class Solution:
    def sumOfGP(self, n, a, r):
        if r==1:
            return n*a;
        return a*(r**n-1)//(r-1)
