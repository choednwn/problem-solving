a, b = -1, -1

while 1:
    a, b = map(int, input().split())
    if a == 0 and b == 0: break
    print(a + b)
