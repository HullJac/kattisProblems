firstLine = input()
firstLine = firstLine.split()
first = int(firstLine[0])
second = int(firstLine[1])

rateList = []

for i in range(second):
    rateList.append(int(input()))

if first == second:
    avg = 0
    for num in rateList:
        avg += num
    avg = avg / second
    print("{} {}".format(avg, avg))

else:
    if second > 0:
        firstAvg = 0
        secondAvg = 0
        for i in range(second):
            firstAvg += rateList[i]
            secondAvg+= rateList[i]

        for i in range(first - second):
            firstAvg += -3
            secondAvg += 3

        print("{} {}".format((firstAvg/first), (secondAvg/first)))

    else:
        print("{} {}".format(-3, 3))
