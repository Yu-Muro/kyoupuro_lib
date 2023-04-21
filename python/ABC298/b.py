import numpy as np

n :int = int(input())
a = [list(map(int, input().split())) for _ in range(n)]
b = [list(map(int, input().split())) for _ in range(n)]
x = np.array(a)
y = np.array(b)
for _ in range(4):
    if np.min(y - x) >= 0:
        print("Yes")
        break
    x = np.rot90(x)
else:
    print("No")
