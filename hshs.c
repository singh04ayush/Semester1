#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,a,b,min;
    printf("enter the number: ");
    scanf("%d", &n);
   for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=2*n-1;j++){
        a=i;
        if(i>n) a=2*n-i;
        b=j;
        if(j>n) b=2*n-j;
        if(a<b) min=a;
        else min=b;
        printf("%d",n+1-min);
    }
    printf("\n");
   }

    return 0;
}
