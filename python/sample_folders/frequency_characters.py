str = "cpppcpcp"
mp = {}
for i in str:
    if i not in mp:
        mp[i] = 0
    #else:
    mp[i] += 1
print(mp)
print()
print(mp.items(),mp.keys(),mp.values())