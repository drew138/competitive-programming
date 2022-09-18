import math
t = int(input())



while t:
    n = int(input())
    m = math.floor(math.log10(n))
    print(n - 10 ** m)
    t -= 1
