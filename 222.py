nums = input().split(' ')
n = int(nums[0])
k = int(nums[1])


def fact(n):
    if n == 0:
        return 1;
    return fact(n - 1) * n


if k > n:
    print(0)
else:
    print(int((fact(n) ** 2) / (fact(k) * fact(n - k) ** 2)))
