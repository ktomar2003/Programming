def Add(a,b):
    if b==0:
        return a
    else:
        return Add(a^b,(a&b)<<1)

def Mul(a,b):
    if b==0:
        return 0
    else:
        return Add(a,Mul(a,b-1))

m=Mul(5,6)
print(m)
