n = int(input())
s = [*map(int, input().split())]
es = [i / float(max(s)) * 100 for i in s]

t = 0
for i in range(n):
    t += es[i] 
print(t / n)

