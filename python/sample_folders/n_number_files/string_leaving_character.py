string  = input()
c = ""
i, n = 0, 2
while i < len(string):
    c += string[i]
    i += n
    n += 1
print(c)