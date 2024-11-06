n = [i+1 for i in range(30)]

for _ in range(28):
    n.pop(n.index(int(input())))

n.sort()
print(f"{n[0]}\n{n[1]}")
