#include<stdio.h>
void fibo(int n){
    if(n<1){
         printf("invalid input ");
         return;
    }
    int prev1=1;
    int prev2=0;
    for(int i=1;i<=n;i++){
        if(i>2){
            int fn=prev1+prev2;
            prev2=prev1;
            prev1=fn;
            printf("%d\t",fn);
        }
        if(i==1) {
            printf("%d\t",prev2);
        }
        if(i==2){
             printf("%d\t",prev1);
    }
    }

}
int main(){
    int a;
    printf("how many no. of series please enter ");
    scanf("%d",&a);
    fibo(a);
    return 0;
}