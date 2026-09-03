class Solution:
	def binaryToDecimal(self, b):
		c=b[::-1]
		
		sum =0
		for i in range(len(c)):
		    n =int(c[i])
	    	sum += (2**i)*n
	    	
	    return sum	