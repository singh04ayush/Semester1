#include<stdio.h>
int factorial(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact=fact*i;
        }
    return fact;    
}
int main(){
    int n;
    printf("Enter the n numbers: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("\nfact of %d is %d ",i,factorial(i));
    }
    return 0;
}