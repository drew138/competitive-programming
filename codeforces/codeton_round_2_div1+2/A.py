from collections import Counter
t = int(input())


while t:
    t -= 1
    n, m = tuple(map(int, input().split()))
    first = input()
    second = input()
    diff = n - m
    if first[diff+ 1:] != second[1:]:
        print("NO")
        continue
    counter_first = Counter(first[:diff+1])
    counter_second = Counter(second[0])
    if counter_first["0"] >= counter_second["0"] and counter_first["1"] >= counter_second["1"]:
        print("YES")
    else:
        print("NO")
