# GCD of two nos. using Euclid's Algorithm
m=12
n=8
while n!=0:
    r = m % n
    m = n 
    n = r
print(m)

----------------------------------------------

n=6
a=[53,25,38,41,15,28]
i=0
k=28
while i<n and a[i]!=k:
    i=i+1
if i<n:
    print(i)
else:
    print(-1)

----------------------------------------------
    
n,c=6,0
flag=0
a=[53,25,38,20,15,28]
for i in range(n):
    for j in range(i+1,n):
        if a[i]==a[j]:
            flag=1
            break
        c+=1
#print(c)
if flag==1:
    print("Equal elements found")
else:
    print("Equal elements NOT found")
