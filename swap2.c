#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int a,b;
    printf("enter number a: ");
    scanf("%d",&a);
    printf("enter number b: ");
    scanf("%d",&b);
    swap(&a, &b);
    printf("value of a= %d",a);
    printf("\n value of b = %d",b);
    return 0;

}
