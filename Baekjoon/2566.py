g = []
for _ in range(9):
    g.extend([*map(int, input().split())])

print(max(g))
print(g.index(max(g)) // 9 + 1, g.index(max(g)) % 9 + 1)
