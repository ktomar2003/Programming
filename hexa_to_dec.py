import sys
import math as m
T=int(input())
for _ in range(T):
    hexa=input()
    lst=list(hexa)
    l=len(lst)
    if l!=14:
        print("Invalid Input\n")
        exit()
    #lst.remove('.')    # To remove . from the Input List
    for i in range(l):
        if lst[i]=='A' or lst[i]=='a':
            lst[i]=10
        elif lst[i]=='B' or lst[i]=='b':
            lst[i]=11
        elif lst[i]=='C' or lst[i]=='c':
            lst[i]=12
        elif lst[i]=='D' or lst[i]=='d':
            lst[i]=13
        elif lst[i]=='E' or lst[i]=='e':
            lst[i]=14
        elif lst[i]=='F' or lst[i]=='f':
            lst[i]=15
        #elif lst[i]=='0':
            #lst[i]=0    # This can be Ignored
        elif lst[i]=='1':
            lst[i]=1
        elif lst[i]=='2':
            lst[i]=2
        elif lst[i]=='3':
            lst[i]=3
        elif lst[i]=='4':
            lst[i]=4
        elif lst[i]=='5':
            lst[i]=5
        elif lst[i]=='6':
            lst[i]=6
        elif lst[i]=='7':
            lst[i]=7
        elif lst[i]=='8':
            lst[i]=8
        elif lst[i]=='9':
            lst[i]=9
        else:
            lst[i]=0
    n=5
    soln=0.0
    for i in range(14):
        if i==6:
            continue
        soln+=lst[i]*m.pow(16,n)
        n-=1
        i+=1
    if soln==0.0:
        print("Program terminated.")
        exit()
    print(float(soln))
