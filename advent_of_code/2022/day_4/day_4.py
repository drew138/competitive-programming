import sys

ans = 0
for line in sys.stdin:
    first, second = line.split(',')
    num_one_first, num_two_first = first.split('-')
    num_one_second, num_two_second = second.split('-')

    num_one_first = int(num_one_first)
    num_two_first = int(num_two_first)
    num_one_second = int(num_one_second)
    num_two_second = int(num_two_second)

    if num_one_first <= num_one_second and num_two_first >= num_two_second:
        ans += 1
    elif num_one_second <= num_one_first and num_two_second >= num_two_first:
        ans += 1

print(ans)
