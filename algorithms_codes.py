# GCD of two nos. using Euclid's Algorithm
m=12
n=8
while n!=0:
    r = m % n
    m = n 
    n = r
print(m)
