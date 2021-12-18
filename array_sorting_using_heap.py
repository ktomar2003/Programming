from heapq import *
arr=[]
heap=[]
t=int(input())
for _ in range(t):
    n=int(input())
    arr.append(n)
for item in arr:
    heappush(heap,item)
while heap:
    temp=heappop(heap)
    print(temp)
