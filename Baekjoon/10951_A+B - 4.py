a, b = -1, -1

while 1:
    try:
        a, b = map(int, input().split())
        print(a + b)
    except:
        break
