def fact(n):
    if n == 0:
        return 1
    return fact(n - 1) * n


k = int(input())

print(int(fact(2 * k) / fact(k) ** 2 / (k + 1)), k + 1)
