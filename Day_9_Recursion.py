#Day 9 Recursion
n=int(input())
def factorial(nn):
    if nn<=1:
        return 1
    else:
        return factorial(nn-1)*nn
print(factorial(n))