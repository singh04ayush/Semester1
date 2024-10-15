#include<stdio.h>
int min(int a, int b){
    if(a<b) return a;
    else return b;
}
int hcf(int a, int b){
    int gbd;
    for(int i=min(a,b);i>=1;i--){
    if(a%i==0 && b%i==0){
    gbd=i;
    break;
    }
}
return gbd;
}
int main(){
    int a,b;
    printf("enter first no: ");
    scanf("%d",&a);
    printf("enter second no: ");
    scanf("%d",&b);
    printf("HCF is %d",hcf(a,b));
    return 0;
}