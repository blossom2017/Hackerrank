#!/bin/python3

import sys

fact=1
n = int(input().strip())

for i in range(1,n+1):
    fact=fact*i
print(fact)