n = int(input())
for i in range(n):
  r, s = input().split()
  p =""
  for w in s:
    p += w*int(r)
  print(p)
