# 791A - Bear and Big Brother

import math
a, b = [int(i) for i in input().split()]

print(math.floor(1+math.log(a/b,2/3)))