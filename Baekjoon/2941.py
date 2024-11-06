s = input()
a = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]
c = 0

while len(s) > 0:
    if s[:3] in a:
        s = s[3:]
    elif s[:2] in a:
        s = s[2:]
    else:
        s = s[1:]
    c += 1

print(c)
