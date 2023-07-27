N = int(input())
a = 1
for i in range(N):
    for j in range(i):
        print('-',end = " ")
    for j in range(N):
        if not(i == 0 or j == 0 or i == N-1 or j == N-1):
            print(a, end = " ")
            a += 1
        else:
            print('*', end = " ")
    print()