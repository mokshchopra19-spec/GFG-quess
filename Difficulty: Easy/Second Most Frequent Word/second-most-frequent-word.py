class Solution:
    def secFrequent(self, arr):
        if len(arr)<=1:
           return -1
           
        mp={}
        maxvalue=0
        smaxvalue=-1
        for i in range (len(arr)):
            mp[arr[i]]=mp.get(arr[i],0)+1
            
        for value in mp.values():
             maxvalue=max(maxvalue,value)
                
        for value in mp.values():
            if value<maxvalue:
              smaxvalue=max(smaxvalue,value)
              
        return smaxvalue        
            