#Day 7: Array
#!/bin/python3

import sys


n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]
for i in range(0,n):
    print(arr[n-1-i],end=' ')