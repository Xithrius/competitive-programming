"""
> Problem: 'pet'
> Link:    https://open.kattis.com/problems/pet
"""

lst = []
for i in range(5):
    lst.append(sum([int(j) for j in input().split()]))

m = max(lst)
print(lst.index(m) + 1, m)
