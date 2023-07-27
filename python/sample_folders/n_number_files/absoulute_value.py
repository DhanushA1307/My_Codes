N = int(input())
l = list(map(int, input().spilt()))
K = int(input())
a, b = 0,0
for i in range(N):
    if l[i] >= K:
        a += 1
    else:
        b += 1
print(abs(a-b))