s = input()
print()
l = len(s)//2
for i in range(len(s)//2+1):
    s1 = s[-l:]
    s2 = s[l:-l]
    s3 = s[:l]
    s4 = s1+s2+s3
    print(s4)
    l -= 1