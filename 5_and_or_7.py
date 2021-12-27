def five_or_seven(n):
    c,c1,c2=0,0,0    
    while n%5==0:
        n=n-5
        c1+=1
        return c1
    while n%7==0:
        n=n-7
        c2+=1
        return c2
    else:
        limit=[7,5]
        for i in range(2):
            while n>=limit[i]:
                n-=limit[i]
                c+=1
            if n==0:
                break
        return c

T=int(input())
for _ in range(T):
    n=int(input())
    ans=five_or_seven(n)
    print(ans)
