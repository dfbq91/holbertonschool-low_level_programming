#!/usr/bin/python3
#Find the largest palindrome made from the product of two 3-digit numbers.
for i in range(300000, 998001):
    i = str(i)
    if i[0] == i[5]:
        if i[1] == i[4]:
            if i[2] == i[3]:
                i = int(i)
                for j in range (999, 100, -1):
                    for k in range (999, 100, -1):
                        if j * k == i:
                            print(i)
