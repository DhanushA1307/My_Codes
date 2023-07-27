l = list(map(int,input().split()))
t = 0
for i in l:
    if i % 2 == 0:
        if (i-1) % 2 == 0 and (i+1) % 2 == 0:
            t += 1
    else:
        if (i-1) % 2 == 1 and (i+1) % 2 == 1:
            t -= 1
print(abs(t))