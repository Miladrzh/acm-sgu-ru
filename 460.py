
n = int(input())
for i in range(n):
    s = input()

    if s[::-1][0] in ['x','s','o'] or s[::-1][0:2] == 'hc':
        print(s + 'es')
    elif s[::-1][0] == 'f':
        print(s[:len(s)-1] + 'ves')
    elif  s[::-1][0:2] =='ef':
        print(s[:len(s)-2] + 'ves')
    elif s[len(s) - 1] == 'y':
        print(s[:len(s) - 1] + 'ies')
    else:
        print(s + 's')
