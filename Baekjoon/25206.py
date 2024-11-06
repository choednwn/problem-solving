gl = {"F": 0.0, "D0": 1.0, "D+": 1.5, "C0": 2.0, "C+": 2.5, "B0": 3.0, "B+": 3.5, "A0": 4.0, "A+": 4.5}

c = 0.0
t = 0.0

for _ in range(20):
    s, g = input().split()[1:]

    if g != "P":
        c += float(s)
        t += float(s) * gl[g]

print(t / c)




    

