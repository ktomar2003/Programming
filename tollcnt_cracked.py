import math as m
def cost(t):
    t=t/60
    t=m.ceil(t)
    if t==1:
        return 60
    else:
        return 30*(t-1)+60

unique_list = []
def unique(list1):
	for x in list1:
		if x not in unique_list:
			unique_list.append(x)

c=int(input())
e=[]
p=[]
t=[]
for j in range(c):
    ee=input()
    ptno=input()
    time=int(input())
    e.append(ee)
    p.append(ptno)
    t.append(time)
#print(e)
#print(p)
#print(t)

unique(p)
cos=0
pos=[]
for key in unique_list:
    for i in range(c):
        if p[i]==key:
            pos.append(i)
#print(pos)

diff,co=0,0
y,z=0,1
for _ in range(len(pos)//2):
    a=pos[y]
    b=pos[z]
    diff=t[b]-t[a]
    co=cost(diff)
    cos+=co
    y+=2
    z+=2
print(cos)


'''4
entry
AB00CD0000
60
entry
EF01GH0001
120
exit
AB00CD0000
180
exit
EF01GH0001
240'''
