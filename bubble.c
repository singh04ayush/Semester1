#include<stdio.h>
int main(){
    int n,temp;
    printf("enter the size of array ");
    scanf("%d",&n);
   int a[n];
    for(int i=0;i<n;i++){
        printf("enter the %d element ",i);
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1-j;i++){
            if(a[i>a[i+1]]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
    printf(" %d\t",a[i]);
    }
    return 0;
}