c = int(input())

for _ in range(c):
    s = [*map(int, input().split())]
    p = 0

    for i in range(1, len(s)):
        if s[i] > sum(s[1:]) / s[0]:
            p += 1
    print(f"{round(p / s[0] * 100, 3):.3f}%")

