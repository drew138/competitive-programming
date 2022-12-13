t = int(input())

for _ in range(t):
    n = int(input())
    s = input()
    seen = set()
    ans = False
    prev = ""
    for i in range(1, n):
        characters = s[i-1:i+1]
        if characters in seen:
            ans = True
            break
        seen.add(prev)
        prev = characters
    if ans:
        print("YES")
    else:
        print("NO")
