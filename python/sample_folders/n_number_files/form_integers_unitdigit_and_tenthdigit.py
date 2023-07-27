N = int(input())
l = list(map(int, input().split()))

def comb(a, b)->int:
    return ((a%10)*10)+((b//10)%10)

for i in range(N-1):
    print(comb(l[i],l[i+1]), end = " ")
