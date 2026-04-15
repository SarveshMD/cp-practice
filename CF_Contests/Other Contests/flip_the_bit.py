# Flip the Bit (Easy Version)
# failed
# CF Contest 2217 (Div.2)

test_cases = int(input())

for loop in range(test_cases):
    n, k = [int(i) for i in input().split()]
    a = [int(i) for i in input().split()]
    p = int(input()) - 1

    x = a[p]

    if (x == 1):
        target = n
    else :
        target = 0

    moves = 0
    while (sum(a) != target):
        curr = a[p]
        l = r = p

        while (curr == a[p]):
            l = l - 1
            if (l < 0):
                l = -1
                break
            curr = a[l]

        l += 1

        curr = a[p]
        while (curr == a[p]):
            r = r + 1
            if (r >= len(a)):
                r = len(a) - 1
                break
            curr = a[r]

        if (r != len(a)-1):
            r-=1

        a[l:r+1] = [a[l]^1 for i in range(r-l+1)]
        moves += 1

    print(moves)
