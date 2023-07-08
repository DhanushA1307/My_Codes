N = int(input())
l = list(map(int, input().split()))
s1, s2 = 0, 0
for i in range(N):
    if i < (N//2):
        s1 += l[i]
    else:
        s2 += l[i]
if s1 == s2:
    print("yes")
else:
    print("no")