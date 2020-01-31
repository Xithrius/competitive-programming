"""
> Problem: 'alphabetspam'
> Link:    https://open.kattis.com/problems/alphabetspam
"""

x = input().replace('_', ' ')
l = len(x)

print(len([i for i in x if i == ' ']) / l)
print(len([i for i in x if i.islower()]) / l)
print(len([i for i in x if i.isupper()]) / l)
print(len([i for i in x if not i.isalpha() and i != ' ']) / l)
