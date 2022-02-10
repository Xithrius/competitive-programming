"""
> Problem: 'r2'
> Link:    https://open.kattis.com/problems/r2
"""


import sys


for i in sys.stdin:
    a, b = [int(j) for j in i.split()]
    print((2 * b) - a)
    break
