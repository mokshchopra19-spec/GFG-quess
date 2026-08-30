class Solution:
    def countSubarray(self, arr, k):
        product=1
        ans=0
        i=0
        for j in range (len(arr)):
            product*=arr[j]
            while product>=k and i<=j :
                product//=arr[i]
                i+=1
            ans+=j-i+1    
        return ans