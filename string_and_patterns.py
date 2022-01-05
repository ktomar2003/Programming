T=int(input())
for _ in range(T):
    n=int(input())
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(j,end=" ")
        print()
For 4:
1
12
123
1234

T=int(input())
for _ in range(T):
    n=int(input())
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(i,end=" ")
        print()
For 4:
1
22
333
4444

T=int(input())
for _ in range(T):
    str=input()
    l=len(str)
    for i in range(-1,(-l-1),-1):
        print(str[i],end="")
    print()
For "kartik":
kitrak
For "karan":
narak

n=5
d={}
for i in range(1,n+1):
    name=input()
    pno=int(input())
    d[name]=pno
print(d)
For :
kartik
5698745632
abhi
3652140589
karan
9587452103
marin
6589741022
rahul
6521478963
{'kartik': 5698745632, 'abhi': 3652140589, 'karan': 9587452103, 'marin': 6589741022}
