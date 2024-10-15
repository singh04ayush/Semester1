#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    printf("difference is %d",a-b);
    int temp=a;
    a=b;
    b=temp;
    printf("\nswaped difference is %d",a-b);

}