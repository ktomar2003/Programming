T=int(input())
for _ in range(T):
    n=int(input())
    a=list(map(int,input().split()))
    c=0
    l=[]
    for i in range(n):
        if a[i]%2==0:
            c+=1
        else:
            l.append(c)
            c=0
            continue
    l.append(c)
    print(max(l))

