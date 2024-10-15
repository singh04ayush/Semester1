#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    int sum=a+b;
    int diff=a-b;
    int multi=a*b;
    int ratio=a/b;
    printf("\nsum is %d",sum);
    printf("\nmultiple is %d",multi);
    printf("\ndifference is %d",diff);
    printf("\nratio is %d",ratio);
    return 0;
}




