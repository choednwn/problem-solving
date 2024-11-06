n, m = map(int, input().split())
b = [i + 1 for i in range(n)]

for _ in range(m):
    i, j = map(int, input().split())
    buf = b[i-1:j]
    buf.reverse()

    for x in range(j - i + 1):
        b[x + i - 1] = buf[x]

print(*b)
    
