N = int(input())
l = list(map(int, input().split()))
a, b = 0, 0
for i in range(N):
    if l[i] % 2 == 0:
        a += 1
    else:
        b += 1
if a == b:
    print("-1")
elif a > b:
    print("odd")
else:
    print("even")