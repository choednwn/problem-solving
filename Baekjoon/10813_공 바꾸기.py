n, m = map(int, input().split())
b = [i + 1 for i in range(n)]

for _ in range(m):
    i, j = map(lambda t: int(t) - 1, input().split())

    buf = b[i]
    b[i] = b[j]
    b[j] = buf

print(*b)
