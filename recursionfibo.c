#include<stdio.h>
int prev1=1;
int prev2=0;
void fibo(int n){
    
    if(n<3) return;
    int fn=prev1+prev2;
    prev2=prev1;
    prev1=fn;
    printf("%d\t",fn);
    return fibo(n-1);
}
void printfibo(int n){
    if(n<1) printf("invalid input");
    else if(n==1) printf("%d\t",0);
    else if(n==2) printf("%d\t%d\t",0,1);
    else{
        printf("%d %d ",0,1);
        fibo(n);
    }
    return;
}
int main(){
    int a;
    printf("enter the numbers of terms ");
    scanf("%d",&a);
    printfibo(a);
    return 0;
}