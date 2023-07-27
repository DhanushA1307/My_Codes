N = int(input())
L = list(map(int, input().split()))
m = 0
for i in range(N):
    c = 0
    for j in range(1,L[i]+1):
        if L[i]%j == 0:
            c += 1
    if m < c:
        m = c
        
print(m)