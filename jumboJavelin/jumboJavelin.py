line = int(input())
total =0

for i in range(line):
    total += int(input())
total = total - (line - 1)
print(total)
