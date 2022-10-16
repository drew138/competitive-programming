t = int(input())


while t:
    t -= 1
    n, c = list(map(str, input().split()))
    s = input()
    s += s
    cur = -1
    answer = 0
    s = list(reversed(s))
    for i in range(2 * int(n)):
        if s[i] == 'g':
            cur = i
        elif s[i] == c:

            answer = max(answer, i - cur)

    print(answer)
