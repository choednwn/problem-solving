val_amt = int(input())
values = map(int, input().split())
find = int(input())
tot_amt = 0

for i in values:
    if i == find:
        tot_amt += 1

print(tot_amt)
