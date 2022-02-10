"""
> Problem: 'quadrant'
> Link:    https://open.kattis.com/problems/quadrant
"""

x, y = int(input()), int(input())
lst = [('+', '+'), ('-', '+'), ('-', '-'), ('+', '-')]
x = '+' if x > 0 else '-'
y = '+' if y > 0 else '-'
print(lst.index((x, y)) + 1)
