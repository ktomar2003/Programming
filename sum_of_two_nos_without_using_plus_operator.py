def Add(a, b):
    if b==0:
        return a
    else:
        return Add(a^b, (a&b) << 1)

a=Add(100,600)
print(a)
