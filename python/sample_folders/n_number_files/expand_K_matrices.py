R, C, K = map(int, input().split())
mat = []
for i in range(R):
    mat.append(list(map(int, input().split())))
print()
for i in range(R):
    for j in range(K):
        for k in range(C):
            print(mat[i][k], end=" ")
        print()