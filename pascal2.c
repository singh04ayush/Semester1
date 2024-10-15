#include<stdio.h>
int main(){
    int a;
    printf("Enter the no. of lines: ");
    scanf("%d",&a);
    int b=a-1;
    
    for (int i=0;i<=b;i++){
        int first=1;
        for(int j=0;j<=i;j++){
            printf("%d ",first);
            first=first*(i-j)/(j+1);
           
        }
        printf("\n");
    }
}