"""
> Problem: 'cold'
> Link:    https://open.kattis.com/problems/cold
"""

r = int(input())
lst = [int(j) for j in input().split() if int(j) < 0]
print(len(lst))
