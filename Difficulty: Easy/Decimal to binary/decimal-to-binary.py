class Solution:
    def decToBinary(self, n):
       ans =""
       while n>0:
           m= n&1
           
           n= n>>1
           ans+=str(m)
        
       out= ans[::-1]   
       return out
       