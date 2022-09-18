t = int(input())

while t:
    n, k, b, s = tuple(map(int, input().split()))

    arr = []
    if k * b > s:
        print(-1)
        t -= 1
        continue
    tmp = min(k * (b + 1) - 1, s)
    arr.append(str(tmp))
    s -= tmp
    for _ in range(n - 1):
        if s:
            tmp = min(s, k - 1)
            arr.append(str(tmp))
            s -= tmp
        else:
            arr.append("0")

    if s == 0:
        print(" ".join(arr))
    else:
        print(-1)

    t -= 1
