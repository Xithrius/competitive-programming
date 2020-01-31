"""
> Problem: 'basketballoneonone'
> Link:    https://open.kattis.com/problems/basketballoneonone
"""

n = input()
x = [(n[i], int(n[i + 1])) for i in range(0, len(n), 2)]
a = sum([i[1] for i in x if i[0] == 'A'])
b = sum([i[1] for i in x if i[0] == 'B'])
if a > b:
    print('A')
else:
    print('B')
