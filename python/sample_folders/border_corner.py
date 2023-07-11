N = int(input())
for i in range(N):
    for j in range(N):
        if((i == 0 and j == 0) or (i == 0 and j == N-1) or (j == 0 and i == N-1) or (j == 0 and i == N-1)):
            print('#',end = "")
        elif(i == 0 or j == 0 or i == N-1 or j == N-1 or i == j or (i+j) == N-1):
            print('*',end = "")
        else:
            print('-',end="")
    print()