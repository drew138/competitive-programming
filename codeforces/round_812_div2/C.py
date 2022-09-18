from math import ceil
t = int(input())

while t:

    n = int(input())
    ans = []
    seen = [False] * n
    can_be_created = True
    i = n - 1
    while i >= 0:
        next_num = (ceil(i ** (1/2)) ** 2)
        dif = next_num - i

        if seen[dif]:
            can_be_created = False
            break
        for j in range(dif, n):
            seen[j] = True
        tmp = list(range(dif, n))
        n = dif
        ans += tmp
        i -= len(tmp)

    if can_be_created:
        ans = map(str, reversed(ans))
        print(" ".join(ans))
    else:
        print(-1)


    t -=1
