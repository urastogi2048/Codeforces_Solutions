def hanoi(n,s,d,a):
    if n==1:
        print("move 1 from", s ,"to", d) 
        return
    hanoi(n,s,a,d)
    print("move"  , n , "from", s, "to", d)
    hanoi(n-1, a,s,d)
hanoi(4,'A','B','C')

