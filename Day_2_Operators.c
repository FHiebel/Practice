//Day 2 Operators

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    //input variables
    double mealCost;
    int tipPercent;
    int taxPercent;
    //result var
    double totalCost;
    scanf("%lf %i %i",&mealCost,&tipPercent, &taxPercent);
    //printf("%.2f, %i, %i",mealCost,tipPercent, taxPercent);
    totalCost=mealCost+mealCost*(tipPercent+taxPercent)/100;
    double totalCost_to_round;
    if ((totalCost-floor(totalCost))>=0.5){
        totalCost_to_round=totalCost+1;
    }
    else{
        totalCost_to_round=totalCost;
    }
        printf("The total meal cost is %i dollars.",(int) totalCost_to_round);
    return 0;
}
