#include <stdio.h>
#include <string.h>
//Day 6 Let's review
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
     char s[10001];
     char odd[10001];     
     
     int k=0;
     scanf("%s",s);
        for (int ii=0;ii<strlen(s);ii++){

        
            if (ii%2==0){
                printf("%c",s[ii]);
            }
            else{
            odd[k]=s[ii];
            k=k+1;
            }

        }
                printf(" ");
        for (int odd_i=0;odd_i<strlen(odd);odd_i++){
            printf("%c",odd[odd_i]);
        }
        printf("\n");
memset(odd, 0, sizeof(odd)); //needed to reset odd[] from one word to the other
        }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
