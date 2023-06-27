
def check(maxi, l):
	for i in l:
		if(i > maxi):
			return 0
	return 1


a,b = map(int, input().split())
lis = list(map(int, input().split())
maxi = max(lis)
l = []
for i in lis:
	if(i != maxi):
		l.append(i*b)
if(check(maxi,l)):
	print(maxi)
else:
	print(0)
