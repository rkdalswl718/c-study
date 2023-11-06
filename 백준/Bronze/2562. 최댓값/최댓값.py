n = []
for i in range(9):
    n.append(int(input()))


big = max(n)
num = n.index(big) + 1
print(big)
print(num)
