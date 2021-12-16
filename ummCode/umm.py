import re
import binascii

inp = input()

punctuation= '''!()-[]{};:'"\,<>./?@#$%^&*_~'''
for punc in punctuation:
    inp = inp.replace(punc,'')

inp = inp.split()

goodList = []
for i in range(len(inp)):
    if re.search('[um]+$', inp[i]):
        goodList.append(inp[i])

bestList = ""
for item in goodList:
    for i in range(len(item)):
        bestList = bestList + item[0]
        item = item[1:]

newStr = ""
for i in range(len(bestList)):
    if bestList[i] == 'u':
        newStr = newStr + "1"
    elif bestList[i] == 'm':
        newStr = newStr + "0"

'''
# print(len(newStr))
start = 0
end = 7
for i in range(int(len(newStr)/7)):
    x = int(newStr[start:end], 2)
    print(x)
    start += 7
    end += 7

b = x.to_bytes(2, 'big')

n = binascii.b2a_uu(b)
print(n)
'''

# print(newStr)
i = 0
groups = []
curr = ""
for c in newStr:
    curr += c
    i += 1

    if i == 7:
        i = 0
        groups.append(curr)
        curr = ""

for item in groups:
    print(chr(int(item, 2)), end="")
print()
