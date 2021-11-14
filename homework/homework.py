probs = input().split(';')
total = 0
for prob in probs:
    if '-' in prob:
        nums = prob.split('-')
        total += (int(nums[-1]) - int(nums[0]) + 1)
    else:
        total += 1
print(total)
