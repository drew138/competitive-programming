from collections import Counter
t = int(input())

for _ in range(t):

    n = int(input())
    s = input()
    if 'RL' in s:
        print(0)
        continue
    c = Counter(s)
    if c['L'] == 0 or c['R'] == 0:
        print(-1)
        continue
    for i in range(1, n):
        if s[i] == 'R' and s[i - 1] == 'L':
            print(i)
            break
