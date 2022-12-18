t = int(input())


def check(matrix):
    return matrix[0][0] < matrix[0][1] and matrix[0][0] < matrix[1][0] and matrix[1][0] < matrix[1][1] and matrix[0][1] < matrix[1][1]


def rotate(matrix):

    matrix[1][0], matrix[0][1] = matrix[0][1], matrix[1][0]

    matrix[0][0], matrix[0][1] = matrix[0][1], matrix[0][0]
    matrix[1][0], matrix[1][1] = matrix[1][1], matrix[1][0]


for _ in range(t):

    first = list(map(int, input().split()))
    second = list(map(int, input().split()))
    matrix = [first, second]
    ans = False
    for _ in range(5):
        ans = ans or check(matrix)
        rotate(matrix)

    if ans:
        print("YES")
    else:
        print("NO")
