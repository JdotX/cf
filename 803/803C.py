from __future__ import print_function
import math

n, k = map(int, raw_input().split())
thresh = k*(k+1) / 2
b = n / thresh

if k > 100000:
    b = 0
else:
    while b > 0:
        if n % b == 0:
            break
        b = b-1
    
if b == 0:
    print (-1)
else:
    a = n / b
    ar = range(1,k)
    ar.append(a-(k*(k-1)/2))
    for i in range(k):
        print (ar[i]*b, end=" ")
    print ("")
