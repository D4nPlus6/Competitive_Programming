from sys import stdin
input = stdin.readline
from collections import defaultdict

N = int(input())
L = int(input())
Q = int(input())
del N

illuminated = set()
for _ in range(L):
    l,r = map(int,input().split())
    illuminated.add((l-r,l+r))
illuminated = sorted(illuminated,key=lambda x: x[0])

for _ in range(Q):
    l = int(input())
    for p in illuminated:
        if p[0] <= l <= p[1]: print('Y'); break
    else: print('N')
