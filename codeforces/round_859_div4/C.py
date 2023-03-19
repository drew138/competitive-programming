t = int(input())

for _ in range(t):
    n = int(input())
    s = input()
    m = {}
    ans = True
    for i, character in enumerate(s):
        tmp = i % 2
        if character in m and m[character] != tmp:
            ans = False
            break
        m[character] = tmp
    print("YES" if ans else "NO")
