//Day 9: Recursion
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%i",&n);
    int factorial(int nn){
        if (nn<=1){
            return 1;
        }
        else {
            return factorial(nn-1)*nn;
        }
    }
    printf("%i",factorial(n));
    
    return 0;
}
