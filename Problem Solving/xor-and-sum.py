#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'xorAndSum' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. STRING a
#  2. STRING b
#

mod = 10**9 + 7

def convert_b(n):
    return (int(n, 2))

def xorAndSum(a, b):
    # Write your code here
    x = convert_b(a)
    y = convert_b(b)
    sum = 0
    
    for i in range(0, 314160):
        sum = sum + (x^(y<<i))
        
    return sum%mod
        
    
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = input()

    b = input()

    result = xorAndSum(a, b)

    fptr.write(str(result) + '\n')

    fptr.close()
