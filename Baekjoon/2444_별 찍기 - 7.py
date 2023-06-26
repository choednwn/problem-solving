n = int(input())
c = -1

for i in range(1, n+1):
    c += 2
    print(" " * (n - i) + "*" * c)

for i in range(1, n):
    c -= 2
    print(" " * i + "*" * c)
