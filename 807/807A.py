import sys
n = input()
a1 = sys.maxint
b1 = sys.maxint
ans = 1 # 0-yes, 1-dk, 2-no
for _ in range(n):
    a, b = map(int, raw_input().split())
    if ans!= 0:
        if a != b:
            ans = 0
        else:
            if a > a1:
                ans = 2
    a1 = a
    b1 = b

if ans == 0:
    print ("rated")
elif ans == 1:
    print ("maybe")
else:
    print ("unrated")
