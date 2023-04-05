def Mul(a, b):
    if b==0:
        return 0
    else:
        return (a+Mul(a,b-1))

m=Mul(5,6)
print(m)
