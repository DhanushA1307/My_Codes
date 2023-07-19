s = input()
n_l = []
s_l = []

for i in range(len(s)):
    n_l.append(int(s[i]))

m = max(n_l)

def bins(i, m)->str:
    c = ""
    while(i > 0):
        c += "1"
        i -= 1
    while(len(c) < m):
        c += "0"
    return c

for i in n_l:
    s_i = bins(i,m)
    s_l.append(s_i)
     
for i in range(m):
    for j in range(len(s)):
        print(s_l[j][i],end = " ")
    print()