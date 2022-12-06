t = int(input())


while t:
    s = input()
    
    rev = "".join(list(reversed(s)))
    print(s + rev) 


    t -= 1
