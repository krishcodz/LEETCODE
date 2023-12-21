class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack=[]
        sym = ["+","-","*","/"]
        for i in tokens:
            if i in sym:
                t1=stack.pop()
                t2=stack.pop()
                match i:
                    case "+":
                        stack.append(t1+t2)
                    case "-":
                        stack.append(t2-t1)
                    case "*":
                        stack.append(t1*t2)
                    case "/":
                        stack.append((t2//t1) if t1*t2 >=0 else (-(-t2//t1)))
            else:
                stack.append(int(i))
        return stack[0]