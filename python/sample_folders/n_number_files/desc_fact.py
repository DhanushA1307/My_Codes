import math
a,b = map(int, input().split())
[print(i, end = " ") for  i in range(math.gcd(a,b),0,-1) if a%i == 0 and b%i == 0]