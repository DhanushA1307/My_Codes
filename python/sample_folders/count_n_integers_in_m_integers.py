a, b = map(int, input().split())
l1 = sorted(list(map(int, input().split())))
l2 = sorted(list(map(int, input().split())))

c1, c2 = 0, 0


def count(l)->int:
    d = {}
    for i in l:
        if i not in d:
            d[i] = 0
        d[i] += 1
    
    c = 0
    for i in d:
        if d[i] >= 2:
            c += 1
    return c

c1 = count(l1)
c2 = count(l2)

s_c = 0

def check(r1, r2)->int:
    c = 0
    
    def search(l, r ,i, r2)->bool:
        if(r >= l):
            ra = (r-l)//3
            mid1 = l + ra
            mid2 = mid1 + ra
            if r2[mid1] == i or r2[mid2] == i:
                return True
            if r2[mid1] > i:
                return search(l,mid1-1,i,r2)
            if r2[mid2] < i:
                return search(mid2+1,r,i,r2)
            return search(mid1+1, mid2-1, i, r2)
        return False    
    
    for i in r1:
        if search(0,len(r2), i, r2):
            c += 1
    return c

if c1 >= c2:
    s_c = check(l1, l2)
else:
    s_c = check(l2, l1)
    
print(s_c)

'''for i in d:
    print(i, d[i],sep=":")
    print()'''
