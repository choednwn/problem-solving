z = []

for _ in range(5):
    z.append(list(input().ljust(15)))
for i in range(15):
    for j in range(5):
        if z[j][i] != " ":
            print(z[j][i], end="")
