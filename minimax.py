import math

def mm (d,n,mx,s,t):
    if d==t:
        return s[n]
    if mx:
        return max(mm(d+1,2*n,False,s,t),mm(d+1,2*n+1,False,s,t))
    else:
        return min(mm(d+1,2*n,True,s,t),mm(d+1,2*n+1,True,s,t))

scores = [3, 5, 2, 9, 12, 5,3,4,4,4,554,34,345,25,32]

print("Minimax Output =", mm(0,0,True,scores,3))
