str = input()
N = int(input())
c = 0
sc = ""
for i in range(len(str)):
    if str[i] not in "aeiouAEIOU":
        if c != N:
            sc += str[i]
            c += 1
if(c == N):
    print(sc)
else:
    print(-1)