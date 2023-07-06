'''import collections as col'''
R, C = map(int, input().split())
mat = [[int(i) for i in input().split()] for _ in range(R)]
'''cols = col.defaultdict(int)
for r in range(R):
    for c in range(C):
        if mat[r][c] < 0:
            cols[c] += 1
if cols:
    print(sorted(cols.items()), key = lambda x:(-x[1], x[0])[0][0] + 1)
else:
    print(-1)'''

rows = []
for i in range(C):
    c = 0
    for j in range(R):
        if mat[j][i] < 0:
            c += 1
    if c != 0:
        rows.append((c,i+1))

rows.sort(key = lambda x: x[0], reverse = True)
if rows:
    print(rows[0][1])
else:
    print(-1)