"""
> Problem: 'apaxiaaans'
> Link:    https://open.kattis.com/problems/apaxiaaans
"""

n = input()
lst = []

for i in n:
    try:
        if i != lst[-1]:
            lst.append(i)
    except IndexError:
        lst.append(i)

print(''.join(str(y) for y in lst))
