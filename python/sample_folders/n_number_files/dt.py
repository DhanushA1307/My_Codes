def exc(i, l, a) -> str:
    f = 1
    for j in range(a):
        if j not in l:
            f *= l[j]
    f = str(f)
    return f

a = int(input())
l = list(map(int, input().split()))

for i in range(a):
    print(exc(i,l,a), sep = " ")