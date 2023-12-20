def unique_path(R, C)->int:
	if(R == 0 and C == 0):
		return 0
	if(R == 0 or C == 0):
		return 1
	return (unqiue_path(R-1,C)+unique_path(R,C-1))
R, C = map(int, input().split())
print(unique_path(R-1,C-1))
