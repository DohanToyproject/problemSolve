lineNum = int(input())
for i in range(lineNum):
   for k in range(lineNum-(i+1)):
      print(" ")
   for j in range(i+1):
      print("*")
   print("\n")
