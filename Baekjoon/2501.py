k, n = map(int, input().split())
d = set()

for i in range(1, int(k / 2) + 1):
    if k % i == 0:
        d.add(i)
        d.add(int(k / i))

d_list = [*d]
d_list.sort()
print(d_list[n - 1] if n <= len(d_list) else 0)
