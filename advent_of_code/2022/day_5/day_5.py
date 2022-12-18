import sys

lines = [line for line in sys.stdin]

index = lines.index('\n')
data, instructions = lines[:index], lines[index+1:]

buckets = [[] for _ in range(40)]

data.reverse()
for i in range(1, len(data)):
    line = data[i]
    for i, character in enumerate(line):
        if character.isalpha():
            buckets[i].append(character)

buckets = [[]] + [bucket for bucket in buckets if bucket]

instructions = [
    tuple(map(int,line.replace('move ', '').replace(' from ', ',').replace(' to ', ',').split(',')))
    for line in instructions
]

for move, _from, to in instructions:
    n = len(buckets[_from])
    to_move = buckets[_from][n - move:]
    buckets[_from] = buckets[_from][:n - move] 
    buckets[to] += list(reversed(to_move))

result = []

for i in range(1, len(buckets)):
    if buckets[i]:
        result.append(buckets[i][-1])

print("".join(result))
