#Goal of this tryout is to create a function from scratch and invoke it for the given problem
def f_to_c(f):
    return (f-32)*(5/9)
def c_to_f(c):
    return (9/5)*c+32
n=int(input("Enter 1 to convert deg F to deg C or 2 to convert deg C to deg F : "))
if n==1:
    f=int(input("Enter the temp in deg F : "))
    c=f_to_c(f)
    print(f,"degrees in deg C =",c)
elif n==2:
    c=int(input("Enter the temp in deg C : "))
    f=c_to_f(c)
    print(c,"degrees in deg F =",f)
else:
    print("Invalid input!! Try entering the value 1 or 2")
