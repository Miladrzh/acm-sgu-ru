import sys

n = int(input())
l = []
for i in range(n):
    x = int(input())
    l.append(x)

l = sorted(l)
for i in range(2, n):
    if l[i - 1] + l[i - 2] > l[i]:
        print(l[i - 1], l[i - 2], l[i])
        sys.exit(0)
print(0, 0, 0)
