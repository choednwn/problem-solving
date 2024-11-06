s = list(input().upper())
l = list(set(s))
a = list()

for sv in l:
    a.append(s.count(sv))
print(l[a.index(max(a))] if a.count(max(a)) == 1 else "?")

