for i in range(10001):
    
    def _2_4_8(i)->bool:
        d = {}
        s = ()
        while(i > 0):
            d[i%10] = d.get(i%10,0) + 1
            i = i//10
        for i in d:
            if i == 2 or i == 4 or i == 8:
                s.index(d[i])
        if s.count == 1:
            return True
        return False
    
    if _2_4_8(i):
        print(i,end = " ")