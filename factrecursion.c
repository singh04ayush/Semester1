#include<stdio.h>
int fact(int x){
    if(x>=1) 
    return x*fact(x-1);
    else return 1;
}
int main(){
    int a,result;
    printf("enter the no ");
    scanf("%d",&a);
    result=fact(a);
    printf("factorial is %d",result);
}
