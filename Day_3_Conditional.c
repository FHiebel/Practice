//Day 3 Conditional statements
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N; 
    scanf("%d",&N);
    if ((N%2)==1){
        printf("Weird");
    }
    else{
        if (((N<=5)&&(N>=2))||(N>20)){
         printf("Not Weird");   
        }
        if ((N<=20)&&(N>=6)){
         printf("Weird");   
        }
    }
    return 0;
}
