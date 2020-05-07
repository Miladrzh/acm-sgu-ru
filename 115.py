from datetime import datetime

inp = input().split(' ')
day = int(inp[0])
month = int(inp[1])

try:
    date = datetime(2001, month, day)
    print(date.weekday() + 1)
except ValueError:
    print("Impossible")

