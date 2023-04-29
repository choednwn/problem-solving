all = list()
vals = set()
for i in [int(k) for k in input().split(" ")]:
    all.append(i)
    vals.add(i)

if len(vals) == 1:
    print(10000 + 1000 * vals.pop())
elif len(vals) == 2:
    print(1000 + 100 * (max(vals) if all.count(max(vals)) == 2 else min(vals)))
else:
    print(100 * max(vals))