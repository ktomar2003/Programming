# Codechef problem positive and negative subarrays
p=[]

def subArrays(arr,start,end):
    if end == len(arr):
        return
    elif start > end:
        return subArrays(arr, 0, end + 1)
    else:
        p.append(sum(arr[start:end + 1]))
        return subArrays(arr, start + 1, end)
def result():
    sump,sumn=0,0
    for i in p:
        if i>0:
            sump+=1
        elif i<0:
            sumn+=1
    #print(p)
    if sump>=sumn:
        print(sump-sumn)
    else:
        print(sumn-sump)

for _ in range(int(input())):
    n=int(input())
    b=list(map(int,input().split()))
    a=[]
    c=[]
    for j in range(n):
        a.append(2**j)
    for i in range(n):
        c.append(a[i]*b[i])
    #print(c)
    subArrays(c,0,0)
    result()
    p.clear()
