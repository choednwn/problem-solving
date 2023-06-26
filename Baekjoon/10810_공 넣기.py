n, m = map(int, input().split())
b = [0] * n

for _ in range(m):
    i, j, k = map(int, input().split())
    for y in range(i-1, j):
        b[y] = k
     
print(*b)
