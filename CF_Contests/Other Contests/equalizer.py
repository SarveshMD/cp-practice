# A. The Equalizer
# CF Contest 2217 (Div.2)

test_cases = int(input())
for loop in range(test_cases):
    n, k = [int(i) for i in input().split()]
    a = [int(i) for i in input().split()]

    if (sum(a) % 2 == 1):
        print("YES")
    elif abs(n*k - sum(a)) % 2 == 0:
        print("YES")
    else:
        print("NO")
