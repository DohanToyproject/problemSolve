F, T, R, M = map(int, input(). split())
Task = 0
Fatigue = 0
for i in range(24):
  if Fatigue + F <= M:
    Task += T
    Fatigue += F
  elif Fatigue - R >= 0:
    Fatigue -= R
  else:
    Fatigue = 0
print(Task)
