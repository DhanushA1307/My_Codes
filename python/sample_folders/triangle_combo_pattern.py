s = input()
f = 0
for i in range(len(s)-1,-1,-1):
    for j in range(0,i+1):
        print(s[i],end = "")
    for k in range(0,f+1):
        print(s[f],end = "")
    f += 1
    print()