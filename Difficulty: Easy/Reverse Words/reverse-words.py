class Solution:
    def reverseWords(self, s):
        arr=[]
        st=""
        for i in range (len(s)):
            st+=s[i]
            if s[i]==".":
                st = st[:-1]
                if st != "":
                   arr.append(st)
                st=""
        if st != "":
            arr.append(st) 
        ans=""        
        for i in range (len(arr)-1,-1,-1):
            ans+=arr[i]
            ans+="."
        ans=ans[:-1]
        return ans