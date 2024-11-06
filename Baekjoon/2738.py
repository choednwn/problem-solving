n, m = map(int, input().split())
g = []

for _ in range(2 * n):
    g.append([*map(int, input().split())])

for i in range(n):
    for j in range(m):
        g[i][j] += g[i + n][j] 

for i in range(n):
    print(*g[i])


           
