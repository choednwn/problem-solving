h, m = [int(k) for k in input().split(" ")]
h = (h - 1 if h > 0 else 23) if m < 45 else h
m = m - 45 if m >= 45 else m + 15
print(h, m)