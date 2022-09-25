
n = int(input())
for i in range(n):
    s = input()

    if s[-1] in ['x','s','o'] or s[-2:] == 'ch':
        print(s + 'es')
    elif s[-1] == 'f':
        print(s[:-1] + 'ves')
    elif  s[-2:] =='ef':
        print(s[:-2] + 'ves')
    elif s[-1] == 'y':
        print(s[:- 1] + 'ies')
    else:
        print(s + 's')
