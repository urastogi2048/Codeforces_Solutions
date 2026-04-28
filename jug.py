import math 
def solve(t,j1,j2):
    if t>j1+j2:
        return False
    if t%math.gcd(j1,j2)==0:
        return True
    return False
print (solve(3,5,4))