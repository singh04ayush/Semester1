#include<stdio.h>
int nat(int y, int z);
int main(){
    int a=1;
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    
    nat(a,n);
    
    
}

int nat(int x, int n){
    
    if(x<=n){
        printf("%d \n",x);
        nat(x+1,n);
    }
    else return 0;
}