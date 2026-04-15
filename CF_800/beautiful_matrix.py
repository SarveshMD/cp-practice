# Codeforces Problem 263A - Beautiful Matrix
for i in range(5):
    k = [int(j) for j in input().split()]
    for j in range(5):
        if k[j]==1:
            m,n=i,j

print(abs(2-m)+abs(2-n))