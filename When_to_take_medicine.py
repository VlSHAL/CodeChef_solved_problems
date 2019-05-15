t = int(input())

for i in range(t):
    y, m, d = map(int, input().split(":"))
    if (y % 4 == 0 and y % 400 == 0) or (y % 4 == 0 and y % 100 != 0):
        if m in {1, 3, 5, 7, 8, 10, 12}:
            count = 31 - d
        elif m == 2:
            count = 29 - d
        else:
            count = 61 - d
    else:
        if m in {1, 3, 5, 7, 8, 10, 12}:
            count = 31 - d
        elif m == 2:
            count = 59 - d
        else:
            count = 61 - d
    print((count//2) + 1)
