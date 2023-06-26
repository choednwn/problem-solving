s = input()
print(1 if s[:len(s)//2] == s[int(len(s)//2+len(s)%2):][::-1] else 0)
