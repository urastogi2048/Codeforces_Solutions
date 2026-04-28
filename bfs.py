# def count(grid):
#     rows=len(grid)
#     cols=len(grid[0])
#     time=0
#     def bfs(i,j,time):
        
#         if i>=rows or j>=cols:
#             return time
#         if grid[i][j]==2 or grid[i][j]==0:
#             return 0
        
#         x=0
       
#         if grid[i-1][j]==2 or grid[i+1][j]==2 or grid[i][j+1]==2 or grid[i][j-1]==2:
#              time+=1
#              return max(bfs())        
                    
#     for a in range(rows):
#         for b in range(cols):
#             time = max(bfs(a,b,0) , time)
#     return time 
                   
  HELLO SHIVAM SIR, HOW ARE YOU DOING?
# grid = [[2,1,1],[1,1,0],[0,1,1]]
# print("Minimum time ", count(grid))
# from collections import  deque
# def solve(grid):
#     rows=len(grid)
#     cols=len(grid[0])
#     q=deque()
#     fresh=0
#     time=0

#     for i in range(rows):
#         for j in range(cols):
#             if grid[i][j]==2:
#                q.append((i,j))
#             elif grid[i][j]==1:
#                 fresh+=1
    
#     dirs = [(0,1),(0,-1), (1,0),(-1,0)]
#     while q and fresh>0:
#         size = len(q)
    
#         for _ in range (size):

#             x,y= q.popleft()

            

#             for dx, dy in dirs:
#                 nx = x+dx
#                 ny=y+dy
#                 if 0<=nx< rows and 0<=ny<cols and grid[nx][ny]==1:
#                     grid[nx][ny]=2
#                     fresh-=1
#                     q.append((nx,ny))
#         time+=1
#     if fresh>0:
#         return -1
#     return time
# grid = [[2,1,1],[1,1,0],[0,1,1]]
# print(solve(grid))

# from collections import deque
# def solve(grid):
#     rows=len(grid)
#     cols=len(grid[0])
#     q=deque()
#     fresh=0
#     time=0

#     for i in range(rows):
#         for j in range(cols):
#             if grid[i][j]==1:
#                 fresh+=1
#             if grid[i][j]==2:
#                 q.append((i,j))
        
#             dirs = [(0,1), (1,0), (-1,0), (0,-1)]
        
#             while q and fresh>0:
#              size=len(q)
#              while size>0:
#                 x,y=q.popleft()

#                 for dx,dy in dirs:
#                     nx=dx+x
#                     ny=dy+y

#                     if 0<=nx<rows and 0<=ny<cols and grid[nx][ny]==1:
#                         grid[nx][ny]=2
#                         fresh-=1
#                         q.append((nx,ny))
#                 size-=1

#         time+=1
#     if fresh>0:
#             return -1
#     else :
#             return time
# grid = [[2,1,1],[1,1,0],[0,1,1]]
# print(solve(grid))

            

from collections import deque 
def solve (grid):
    rows=len(grid)
    cols=len(grid[0])
    fresh=0
    time=0
    q=deque()

    for i in range(rows):
        for j in range(cols):
            if grid[i][j]==1:
                fresh+=1
            if grid[i][j]==2:
                q.append((i,j))
            dirs = [
            (0,1),(1,0),(0,-1),(-1,0)
        ]

            while q and fresh>0:
              size=len(q)
              while size>0:
                x,y=q.popleft()
                for dx,dy in dirs:
                    nx=x+dx
                    
                    ny=y+dy
                    if 0<=nx<rows and 0<=ny<cols and grid[nx][ny]==1:
                     
                    grid[nx][ny]=2
                    q.append((nx,ny))
                size-=1
                
    
        time+=1
    if fresh>0:
        return -1
    else:
        return time


grid = [[2,1,1],[1,1,0],[0,1,1]]
print(solve(grid))