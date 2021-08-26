#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    h,m,s = s.split(':')
    if 'PM' in s:
        if h == '12':
            h = '12'
        else:
            h = str(int(h)+12)
    elif 'AM' in s:
        if h == '12':
            h = '00'
        else: 
            h = h
    s = s.replace('PM','')
    s = s.replace('AM','')
    return h+':'+m+':'+s
    




if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
