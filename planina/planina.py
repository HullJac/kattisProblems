start = 2

inp = int(input())

for i in range(inp):
    start = start + (start - 1)

print(start**2)
