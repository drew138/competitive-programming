t = int(input())
yes = "Yes" * 50
while t:
    s = input()
    if s in yes:
        print("YES")
    else:
        print("NO")
    t -= 1
