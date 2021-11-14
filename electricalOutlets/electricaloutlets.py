x = int(input())
outputs = []
for i in range(x):
    total = 0
    line = input()
    line = line.split()
    it = 0
    numNumbers = int(line[it])
    it += 1
    while it <= numNumbers:
        if it == (numNumbers):
            total += int(line[it])
        else:
            total += (int(line[it]) - 1)
        it += 1
    outputs.append(total)

for num in outputs:
    print(num)
