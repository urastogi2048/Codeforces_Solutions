# def nqueens(n):
#     ans=[]
   
#     board = []
#     for i in range(n):
#        row = []
#        for j in range(n):
#          row.append('.')
#        board.append(row)

    
#     def issafe(i,j):
#         if board[i][j]=='Q':
#             return False
#         for a in range (n):
#             if board[a][j]=='Q':
#                 return False
        
#         for b in range (n):
#             if board[i][b]=='Q':
#                 return False
#         a=0
#         b=0
#         while i-a >= 0 and j-a>=0:
#             if board[i-a][j-a]=='Q':
#                 return False
#             a+=1
#         a=0
#         b=0
#         while i+a < n and j-a>=0:
#             if board[i+a][j-a]=='Q':
#                 return False
#             a+=1
#         a=0
#         b=0
#         while i-a >= 0 and j+a<n:
#             if board[i-a][j+a]=='Q':
#                 return False
#             a+=1
#         a=0
#         b=0
#         while i+a < n and j+a<n:
#             if board[i+a][j+a]=='Q':
#                 return False
#             a+=1
#         return True
    
#     def solve(i):

#         if i==n:
#             temp=[]
#             for row in board:
#                 temp.append(''.join(row))
#             ans.append(temp)
#             return


#         for j in range(n):
#             if issafe(i,j):
#                 board[i][j]='Q'
#                 solve(i+1)
#                 board[i][j]='.'

#     solve(0)
#     return ans
# res = nqueens(5)
# for i in res:
#     for j in i:
#         print(j)
#     print( )



def nqueens(n):
    ans=[]
    board=[]
    for i in range(n):
        row=[]
        for j in range (n):
            row.append('.')
        board.append(row)
    
    def issafe(i,j):
        for a in range (n):
            if board[i][a] == 'q':
                return False
            if board[a][j]== 'q':
                return False
        #a==0
        a=0
        b=0
        while i-a >= 0 and j-a>=0:
            if board[i-a][j-a]=='q':
                return False
            a+=1
        a=0
        b=0
        while i+a < n and j-a>=0:
            if board[i+a][j-a]=='q':
                return False
            a+=1
        a=0
        b=0
        while i-a >= 0 and j+a<n:
            if board[i-a][j+a]=='q':
                return False
            a+=1
        a=0
        b=0
        while i+a < n and j+a<n:
            if board[i+a][j+a]=='q':
                return False
            a+=1
        return True
    
    def solve(i):

        if i==n:
           temp=[]
           for a in range(n):
                row= ''.join(board[a])
                temp.append(row)
           ans.append(temp) 
                 
           return
        
        for j in range(n):
            if issafe(i,j):
                board[i][j]='q'
                solve(i+1)
                board[i][j]='.'

    solve(0)
    return ans

res = nqueens(10)
for i in res:
    for j in i:
        print(j)
    print( )
            



