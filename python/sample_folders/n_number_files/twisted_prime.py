N = 1000000000100011#int(input())

def prime(N)->bool:
    if N <= 1:
        return False
    if N <= 3:
        return True
    if N % 2 == 0 or N % 3 == 0:
        return False
    i = 5
    while(i*i < N):
        if N % i == 0 or N % (i+2) == 0:
            return False
        i += 6
    return True

def rev(N)->int:
    return (int(str(N)[::-1]))

if prime(N) and prime(rev(N)):
    print("YES")
else:
    print("NO")