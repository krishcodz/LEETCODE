class Solution:
    def dailyTemperatures(self, temperatures):
        ans=[0]*len(temperatures)
        stack=[]
        for i,t in enumerate(temperatures):
            while stack and temperatures[stack[-1]]<t:
                left = stack.pop()
                ans[left] = i - left
            stack.append(i)
        return ans