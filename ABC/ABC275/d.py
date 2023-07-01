import sys
import math
from collections import defaultdict

sys.setrecursionlimit(10 ** 6)
d = defaultdict(int)

def f(x :int) -> int:
    if d[x] != 0:
        return d[x]
    res = f(math.floor(x / 2)) + f(math.floor(x / 3))
    d[x] = res
    return res

n :int= int(input())
d[0] = 1
ans :int= f(n)
print(ans)