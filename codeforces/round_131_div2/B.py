t = int(input())

while t:
    n = int(input())
    sol = []
    seen = set()
    for i in range(1, n + 1):
        if i in seen:
            continue
        cur = i
        while cur <= n:
            seen.add(cur)
            sol.append(str(cur))
            cur *= 2
    for i in range(1, n + 1):
        if not i in seen:
            sol.append(str(i))


    print(2)
    print(" ".join(sol))

    t -=1
