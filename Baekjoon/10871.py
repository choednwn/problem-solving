n, x = map(int, input().split())
a = [*map(int, input().split())]
c = list()

for i in a:
    if i < x:
        c.append(i)
print(*c)
