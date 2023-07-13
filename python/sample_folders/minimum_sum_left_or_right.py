l = list(map(int, input().split()))
N = int(input())
s1 = 0
s2 = 0
for i in range(len(l)):
    if l[i] != N:
        s1 += l[i]
        
for i in range(len(l)-1,0,-1):
    if l[i] != N:
        s2 += l[i]
        
print(min(s1, s2))