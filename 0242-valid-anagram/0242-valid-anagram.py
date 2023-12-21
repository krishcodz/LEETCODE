class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        temp1 ={}
        temp2 ={}
        for i in s:
            if i not in temp1.keys():
                temp1[i]=1
            else:
                temp1[i]+=1
        for j in t:
            if j not in temp2.keys():
                temp2[j]=1
            else:
                temp2[j]+=1
        ar1=temp1.keys()
        ar2=temp2.keys()
        if(len(ar1) >= len(ar2)):
            maxi= ar1
            mini= ar2
        else:
            maxi= ar2
            mini= ar1 
        for k in maxi:
            if(k not in mini):
                return False
            elif(temp1[k] != temp2[k]):
                return False
        return True