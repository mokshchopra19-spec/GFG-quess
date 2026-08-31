class Solution:
	def bracketNumbers(self, s):
	    ans=[]
	    st=[]
	    cnto=0
	    for x in s:
		  if x =="(":
		     cnto=cnto+1
		     ans.append(cnto)
		     
		     st.append(cnto)
		  elif x==")":
		      ans.append(st.pop())
		return ans      
		      
		      