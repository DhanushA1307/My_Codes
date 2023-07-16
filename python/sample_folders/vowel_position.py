s = input()
l = []
for i in range(len(s)):
    if s[i] in 'EUIOeuioAa':
        l.append(i+1)
        
if len(l) >= 1:
    for i in l:
        print(i,end = " ")
else:
    print("-1")