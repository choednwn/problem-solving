h, m = [int(k) for k in input().split(" ")]
t = int(input())
h = (h + int((m + t) / 60)) % 24
m = (m + t) % 60
print (h, m)