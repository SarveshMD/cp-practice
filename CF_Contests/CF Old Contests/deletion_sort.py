# Contest 2220 - Round 1084 (Div.3)
# B. Deletion Sort


test = int(input())

for loop in range(test):
    n = int(input())
    a = [int(i) for i in input().split()]
    if a == sorted(a):
        print(n)
    else:
        print(1)
