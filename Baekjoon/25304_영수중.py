x = int(input())
for _ in range(int(input())):
    a, b = [int(k) for k in input().split(" ")] 
    x -= a * b
print("Yes" if x == 0 else "No")