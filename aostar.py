# def aostar(graph, h, edge_cost):
#     for node in graph:
#         best = 9999999999

#         for i in graph[node]:
#             cost=0
            
#             for j in i:
#                 cost+=h[j]
#             if len(i)> 1:
#                 cost+=edge_cost
            
#             best=min(best,cost)

#         return best
# graph = {
#     'A':[['B'], ['C','D']]
# }
# h = {
#     'A':0,
#     'B':4,
#     'C':2,
#     'D':3

# }
# print(aostar(graph,h,1))

# def solve(graph,h,cost):
#     for i in graph:
#         best = 9999999999
#         for j in graph[i]:
#             c=0

#             for k in i:
#                 c +=h[k]
#             if(len[j]>1):
#                 c+=cost
            
#             best=min(best,c)
#         return best

# def solve(g,h,cost):
#     for i in g:
#         best =99999999999999
#         for j in g[i]:
#             c=0
#             for k in j:
#                 c+=h[k]+1
            
#             best=min(best,c)
#         return best
# g = {
#     'A':[['B'], ['C','D']]
# }
# h = {
#     'A':0,
#     'B':4,
#     'C':2,
#     'D':3  }
# print(solve(g,h,1))

def solve(g,h,c):
    for i in g:
        best = 9999999999
        for j in g[i]:
            cc=0

            for k in  j:
                cc+=h[k]
                if len(k)>1 :
                    cc+= c
                
                
            best=min(cc,best)
        return best
    
g = {
    'A':[['B'], ['C','D']]
}
h = {
    'A':0,
    'B':4,
    'C':2,
    'D':3}
print(solve(g,h,1))