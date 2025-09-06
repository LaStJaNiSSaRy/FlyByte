#include<stdio.h>

int main(){

        int n=0;
        scanf("%d",&n);
        if ( (n % 100 != 0 && n % 4 == 0) || (n % 400 == 0) ) 
        printf("Artik\n");
     else 
        printf("Degil\n");
    
    
}