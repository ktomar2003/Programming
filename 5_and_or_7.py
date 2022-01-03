def five_or_seven(n):
    print("FOR",n,":")
    five_s,seven_s=0,0    
    if n%5==0:
        n1=n//5
        print("No. of 5's in",n,"are :",n1)
        print("No. of 7's in",n,"is : 0")
    elif n%7==0:
        n2=n//7
        print("No. of 5's in",n,"is : 0")
        print("No. of 7's in",n,"are :",n2)
    else:
        n_dup1=n
        while n_dup1!=0:
            n_dup1-=5
            five_s+=1
            if n_dup1%7==0:
                while n_dup1!=0:
                    n_dup1-=7
                    seven_s+=1
        print("No. of 5's in",n,"are :",five_s)
        print("No. of 7's in",n,"are :",seven_s)

T=int(input())
for _ in range(T):
    n=int(input())
    if n>=24:
        five_or_seven(n)
    else:
        print("FOR",n,":")
        print("Please Enter a Number Greater than or Equal to 24")
