# def exists(board,word):
#     rows=len(board)
#     cols=len(board[0])

#     def dfs(i,j,k):
#         if k==len(word):
#             return True 
#         if i<0 or j<0 or i>=rows or j>=cols:
#             return False
#         if board[i][j]!=word[k]:
#             return False
#         temp=board[i][j]
#         board[i][j]='#'

#         found=(dfs(i+1,j,k+1) or dfs(i,j+1,k+1) or dfs(i-1,j,k+1) or dfs(i,j-1,k+1))
#         board[i][j]=temp
#         return found
#     for i in range(rows):
#         for j in range(cols):
#             if dfs(i,j,0):
#                 return True
#     return False
# board = [['A','B','C','E'],['S','F','C','S'],['A','D','E','E']]
# word=input("Enter word:")
# if exists(board,word):
#     print("Word found")
# else:
#     print("Word not found")  























def exists(board, word):
    rows=len(board)
    cols=len(board[0])

    def dfs(i,j,k):
        if k==len(word):
            return True
        if i<0 or j<0 or i>=rows or j>=cols:
            return False
        if board[i][j]!=word[k]:
            return False
        temp = board[i][j]
       # board[i][j]='#'

        f=(dfs(i+1,j,k+1) or dfs(i,j+1,k+1) or dfs(i-1,j,k+1) or dfs(i,j-1,k+1)  or dfs(i+1,j+1,k+1) or dfs(i-1,j-1,k+1))
        board[i][j]=temp
        return f
    for i in range (rows):
        for j in range (cols):
            if dfs(i,j,0):
                return True
    return False
        
board=[['a','b','c','d'],['e','f','g','h'],['i','j','k','l']]
ff=input("enter word ")
if exists(board,ff):
    print("nigga")
else :
    print("giganigga")


        

