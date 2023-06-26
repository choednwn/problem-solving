n = int(input())
c = 0
for _ in range(n):
    s = list(input())
    h = set()
    p = str()
    
    for l in s:
        if l != p and l not in h:
            p = l
            h.add(l)
        elif l != p and l in h:
            break
    else: 
        c += 1

print(c)

    
         
            
