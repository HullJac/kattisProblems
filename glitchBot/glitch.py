firstTwo = input()
firstTwo = firstTwo.split()

x = int(firstTwo[0])
y = int(firstTwo[1])

numMoves = int(input())

f = "Forward"
r = "Right"
l = "Left"


def testFunc(commands):
    x = 0
    y = 0
    curr = 0
    for command in commands:
        if command == "Forward":
            if curr == 0:
                y += 1
            elif curr == 1:
                x += 1
            elif curr == 2:
                y -= 1
            elif curr == 3:
                x -= 1

        elif command == "Right":
            if curr == 3:
                curr = 0
            else:
                curr += 1

        elif command == "Left":
            if curr == 0:
                curr = 3
            else:
                curr -=1

    return x,y

moveList = []
for i in range(numMoves):
    moveList.append(input())
    
index = 1
for move in moveList:
    x1 = 0
    y1 = 0
    if move == l:
        moveList[index - 1] = r
        x1,y1 = testFunc(moveList)
        if (x == x1 and y == y1):
            print("{} {}".format(index, r))
            break

        moveList[index - 1] = f
        x1,y1 = testFunc(moveList)
        if (x == x1 and y == y1):
            print("{} {}".format(index, f))
            break

        moveList[index - 1] = l

    elif move == r:
        moveList[index - 1] = l
        x1,y1 = testFunc(moveList)
        if (x == x1 and y == y1):
            print("{} {}".format(index, l))
            break

        moveList[index - 1] = f
        x1,y1 = testFunc(moveList)
        if (x == x1 and y == y1):
            print("{} {}".format(index, f))
            break

        moveList[index - 1] = r

    elif move == f:
        moveList[index - 1] = l
        x1,y1 = testFunc(moveList)
        if (x == x1 and y == y1):
            print("{} {}".format(index, l))
            break

        moveList[index - 1] = r
        x1,y1 = testFunc(moveList)
        if (x == x1 and y == y1):
            print("{} {}".format(index, r))
            break

        moveList[index - 1] = f

    else:
        print("error")
    
    index += 1
