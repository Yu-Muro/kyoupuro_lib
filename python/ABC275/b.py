a, b, c, d, e, f = map(int, input().split())
x = a * b * c
y = d * e * f
ans :int = (x - y) % 998244353
print(ans)