d = [3, 6, 9, 12, 15, 19, 22, 26]
s = [x - 64 for x in [*map(ord, list(input()))]]
t = 0

for i in range(len(s)):
    for j in range(8):
        if s[i] <= d[j]:
            t += j + 3
            break
print(t)
