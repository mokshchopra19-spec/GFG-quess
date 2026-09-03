class Solution:
    def primeFactors(self, n):
        ans=[]
        i=2
        while i*i<=n:
            while n%i==0:
                ans.append(i)
                n= n//i
            i+=1
        if n>1:
            ans.append(n)
        return ans    